#pragma once

#include <list>
#include <mutex>
#include <memory>
#include <string>
#include <iostream>

/*
 * @Description:  被观察者（主题）类
 */

/**
 * 为所有具体观察者定义一个接口，在得到主题的通知及时更新自己。
*/
class Observer
{
public:
    virtual ~Observer() = default;
    virtual void update(const std::string& msg) = 0;
};


/**
 * 为所有具体主题定义一个接口，有增加和删除观察者对象的功能。
*/
class Subject
{
public:
    virtual ~Subject() = default;
    virtual void attach(std::shared_ptr<Observer>) = 0;
    virtual void detach(std::shared_ptr<Observer>) = 0;
    virtual void notify() = 0;
};

// 具体的观察者类
class ConcreteObserver : public Observer
{
public:
    explicit ConcreteObserver(int i) : id(i) {}
    ~ConcreteObserver() override = default;

    void update(const std::string& msg) override
    {
        std::cout << "ConcreteObserver: " << id << " get the new message : " << msg << std::endl;
    }

private:
    int id;
};

// 具体的被观察者类
class ConcreteSubject : public Subject
{
public:
    ConcreteSubject() : m_State("") {}
    ~ConcreteSubject() override = default;

    // 注册观察者
    void attach(std::shared_ptr<Observer> pObserver) override
    {
        std::lock_guard<std::mutex> lg(mutex_);
        // 避免重复注册
        for (auto &w : m_ObserverList) {
            if (auto s = w.lock()) {
                if (s == pObserver) return;
            }
        }
        m_ObserverList.push_back(pObserver);
    }

    // 注销观察者
    void detach(std::shared_ptr<Observer> pObserver) override
    {
        std::lock_guard<std::mutex> lg(mutex_);
        m_ObserverList.remove_if([&](const std::weak_ptr<Observer>& w) {
            auto s = w.lock();
            return !s || s == pObserver;
        });
    }

    // 通知所有注册的观察者
    void notify() override
    {
        std::lock_guard<std::mutex> lg(mutex_);
        for (auto it = m_ObserverList.begin(); it != m_ObserverList.end(); )
        {
            if (auto obs = it->lock())
            {
                obs->update(m_State);
                ++it;
            }
            else
            {
                it = m_ObserverList.erase(it); // 清理过期观察者
            }
        }
    }

    // 设置状态
    void setState(const std::string& state)
    {
        std::lock_guard<std::mutex> lg(mutex_);
        m_State = state;
    }

    // 获取状态
    std::string getState() const
    {
        std::lock_guard<std::mutex> lg(mutex_);
        return m_State;
    }

private:
    std::list<std::weak_ptr<Observer>> m_ObserverList;
    std::string m_State;
    mutable std::mutex mutex_;
};