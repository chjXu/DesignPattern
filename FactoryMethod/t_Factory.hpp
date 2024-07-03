#pragma once

#include <iostream>

// 抽象基类，
class TISplitter
{
private:
    /* data */
public:
    TISplitter()
    {
        std::cout << "TISplitter Construct..." << std::endl;
    }

    virtual ~TISplitter()
    {
        std::cout << "TISplitter Deconstruct..." << std::endl;
    }

    virtual void split() = 0; // 抽象方法
};


class TSplitterFactory
{
private:
    /* data */
public:
    TSplitterFactory(/* args */)
    {
        std::cout << "TSplitterFactory Construct..." << std::endl;
    }

    virtual ~TSplitterFactory()
    {
        std::cout << "TSplitterFactory Deconstruct..." << std::endl;
    }

    virtual TISplitter *createSplitter() = 0;
};


template<typename T>
class TSplitterModule : public TISplitter
{
public:
    TSplitterModule(const T& name) : m_(name)
    {
        std::cout << static_cast<std::string>(m_) + " Construct..." << std::endl;
    }

    ~TSplitterModule()
    {
        std::cout << static_cast<std::string>(m_) + " Deconstruct..." << std::endl;
    }

    virtual void split()
    {
        std::cout << static_cast<std::string>(m_) + " is working..." << std::endl;
    }
private:
    T m_;
};


template<typename T>
class TSplitterModuleFactory : public TSplitterFactory
{
private:
    T m_;
public:
    TSplitterModuleFactory(const T& name) : m_(name)
    {
        std::cout << static_cast<std::string>(m_) + " Construct..." << std::endl;
    }

    ~TSplitterModuleFactory()
    {
        std::cout << static_cast<std::string>(m_) + " Deconstruct..." << std::endl;
    }

    virtual TISplitter* createSplitter()
    {
        return new TSplitterModule<T>(m_);
    }
};