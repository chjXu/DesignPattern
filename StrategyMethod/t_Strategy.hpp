#pragma once
#include <iostream>

/*
 * @Description:  策略类，定义所有算法接口
 * CRTP
 */
template<typename Derived>
class TStrategy
{
public:
    TStrategy()
    {
        std::cout << "TStrategy Construct." << std::endl;
    }

    virtual  ~TStrategy()
    {
        std::cout << "TStrategy Deconstruct." << std::endl;
    }

    /**
     * @description: 算法接口，每一个继承的类都调用该方法，并实现其中间过程。
     * @param {*}
     * @return {*}
     */    
    void algorithmInterface()
    {
        std::cout << "TStrategy algorithm." << std::endl;
        static_cast<Derived*>(this)->Impl();
    }
};

/**
 * 具体策略类
 */
template<typename T>
class TConcreteStrategyA : public TStrategy<TConcreteStrategyA<T> >{
public:
    TConcreteStrategyA()
    {
        std::cout << "TConcreteStrategyA Construct." << std::endl;
    }

    ~TConcreteStrategyA()
    {
        std::cout << "TConcreteStrategyA Deconstruct." << std::endl;
    }

    void Impl()
    {
        std::cout << "TConcreteStrategyA Algorithm." << std::endl;
    }
};

template<typename T>
class TConcreteStrategyB : public TStrategy<TConcreteStrategyB<T> >{
public:
    TConcreteStrategyB()
    {
        std::cout << "TConcreteStrategyB Construct." << std::endl;
    }

    ~TConcreteStrategyB()
    {
        std::cout << "TConcreteStrategyB Deconstruct." << std::endl;
    }

    void Impl()
    {
        std::cout << "TConcreteStrategyB Algorithm." << std::endl;
    }
};


template<typename T>
class TConcreteStrategyC : public TStrategy<TConcreteStrategyC<T> >{
public:
    TConcreteStrategyC()
    {
        std::cout << "TConcreteStrategyC Construct." << std::endl;
    }

    ~TConcreteStrategyC()
    {
        std::cout << "TConcreteStrategyC Deconstruct." << std::endl;
    }

    void Impl()
    {
        std::cout << "TConcreteStrategyC Algorithm." << std::endl;
    }
};


// 注意普通类 目前还不支持
class TConcreteStrategyD : public TStrategy<TConcreteStrategyD>{
public:
    TConcreteStrategyD()
    {
        std::cout << "TConcreteStrategyD Construct." << std::endl;
    }

    ~TConcreteStrategyD()
    {
        std::cout << "TConcreteStrategyD Deconstruct." << std::endl;
    }

    void Impl()
    {
        std::cout << "TConcreteStrategyD Algorithm." << std::endl;
    }
};


/*
 * @Description:  定义一个context类，用来维护一个Strategy对象的引用
 */
template<typename T>
class TContext{
public:
    TContext(TStrategy<T> *strategy) : t_strategy(strategy) {}

    ~TContext()
    {
        std::cout << "TContext Deconstruct." << std::endl;
        if(this->t_strategy)
        {
            delete this->t_strategy;
            this->t_strategy = nullptr;
        }
    }

    void ContextInterface()
    {
        t_strategy->algorithmInterface();
    }

private:
    TStrategy<T> *t_strategy;
};