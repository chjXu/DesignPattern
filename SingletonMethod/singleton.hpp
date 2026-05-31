#pragma once

class Singleton
{
public:
    static Singleton& getInstance()
    {
        static Singleton instance;
        return instance;
    }

    void setID(int id)
    {
        m_id = id;
    }

    int getID() const
    {
        return m_id;
    }

private:
    Singleton() = default;
    ~Singleton() = default;

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    int m_id = 0;
};