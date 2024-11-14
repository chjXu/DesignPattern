#pragma once

#include <iostream>
#include <atomic>
#include <mutex>
#include <thread>

class Singleton{
public:
    static Singleton* getInstance();

    void setID(const int id) { this->id = id; }
    int getID() const { return id; }

private:
    int id;

private:
    Singleton();
    Singleton(const Singleton& other) = delete;

    // static Singleton* m_instance;
    static std::atomic<Singleton*> m_instance;
    static std::mutex m_mutex;
};

Singleton::Singleton() {}


// Singleton* Singleton::m_instance = nullptr;

/** 线程非安全版本
 * 在多线程情况下，对象创建可能会造成资源抢占
*/
// Singleton* Singleton::getInstance(){
//     if(m_instance == nullptr){
//         m_instance = new Singleton();
//     }
//     return m_instance;
// }

/**
 * 线程安全版本，但锁的代价太高
*/
// Singleton* Singleton::getInstance(){
//     Lock lock;
//     if(m_instance == nullptr){
//         m_instance == new Singleton();
//     }
//     unlock;
//     return m_instance;
// }


/**
 * 双检查锁，但由于内存读写reorder不安全
*/
// Singleton* Singleton::getInstance(){
    
//     if(m_instance == nullptr){
//         Lock lock;
//         if(m_instance == nullptr)
//             m_instance == new Singleton();
//     }
//     return m_instance;
// }


/**
 * C++ 11版本之后实现（volatile）
*/
std::atomic<Singleton*> Singleton::m_instance{nullptr}; // 原子对象
std::mutex Singleton::m_mutex;

Singleton* Singleton::getInstance()
{
    Singleton* tmp = m_instance.load(std::memory_order_relaxed);
    std::atomic_thread_fence(std::memory_order_acquire); // 获取fence
    if(tmp == nullptr){
        std::lock_guard<std::mutex> lock(m_mutex);
        tmp = m_instance.load(std::memory_order_relaxed);
        if(tmp == nullptr){
            tmp = new Singleton();
            std::atomic_thread_fence(std::memory_order_release); // 释放fence
            m_instance.store(tmp, std::memory_order_relaxed);
        }
    }    
    return tmp;   
}