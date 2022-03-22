#pragma once


class Singleton{
public:
    static Singleton* getInstance();
    static Singleton* m_instance;
private:
    Singleton();
    Singleton(const Singleton& other);
};