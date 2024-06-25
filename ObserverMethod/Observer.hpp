#pragma once

#include <list>

/*
 * @Description:  被观察者（主题）类
 */

/**
 * 为所有具体观察者定义一个接口，在得到主题的通知及时更新自己。
*/
class Observer
{
public:
    virtual void update(int) = 0;
protected:

private:

};


class Subject
{
public:
    virtual void attach(Observer *) = 0;

    virtual void detach(Observer *) = 0;

    virtual void notify() = 0;

protected:

private:
};


class ConcreteObserver : public Observer
{
public:
    ConcreteObserver(Subject *pSubject, int i)
    : m_pSubject(pSubject), id(i) {}

    void update(int value)
    {
        std::cout << "ConcreteObserver: " << id << " get the update. New State:" << value << std::endl;
    }

protected:

private:
    Subject *m_pSubject;
    int id;
};


class ConcreteSubject : public Subject
{
public:
    ConcreteSubject()
    {
        std::cout << "ConcreteSubject construct." << std::endl;
    }

    ~ConcreteSubject()
    {
        std::cout << "ConcreteSubject deConstruct." << std::endl;
    }

    void attach(Observer *pObserver)
    {
        m_ObserverList.push_back(pObserver);
    }

    void detach(Observer *pObserver)
    {
        m_ObserverList.remove(pObserver);
    }

    void notify()
    {
        std::list<Observer*>::iterator it = m_ObserverList.begin();

        while(it != m_ObserverList.end())
        {
            (*it)->update(m_State);
            ++it;
        }
    }

    void setState(int state)
    {
        m_State = state;
    }
    
protected:

private:
    std::list<Observer *> m_ObserverList;
    int m_State;
};