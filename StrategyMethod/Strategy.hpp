#pragma once
#include <iostream>

/*
 * @Description:  策略类，定义所有算法接口
 */
class Strategy
{
public:
    Strategy()
    {
        std::cout << "Strategy Construct." << std::endl;
    }

    ~Strategy()
    {
        std::cout << "Strategy Deconstruct." << std::endl;
    }

    /**
     * @description: 算法接口，每一个继承的类都调用该方法，并实现其中间过程。
     * @param {*}
     * @return {*}
     */    
    virtual void algorithmInterface()
    {
        std::cout << "Strategy algorithm." << std::endl;
    }
};

/**
 * 具体策略类
 */
class ConcreteStrategyA : public Strategy{
public:
    ConcreteStrategyA()
    {
        std::cout << "ConcreteStrategyA Construct." << std::endl;
    }

    ~ConcreteStrategyA()
    {
        std::cout << "ConcreteStrategyA Deconstruct." << std::endl;
    }

protected:
    virtual void algorithmInterface() override
    {
        std::cout << "ConcreteStrategyA Algorithm." << std::endl;
    }
};


class ConcreteStrategyB : public Strategy{
public:
    ConcreteStrategyB()
    {
        std::cout << "ConcreteStrategyB Construct." << std::endl;
    }

    ~ConcreteStrategyB()
    {
        std::cout << "ConcreteStrategyB Deconstruct." << std::endl;
    }

protected:
    virtual void algorithmInterface() override
    {
        std::cout << "ConcreteStrategyB Algorithm." << std::endl;
    }
};


class ConcreteStrategyC : public Strategy{
public:
    ConcreteStrategyC()
    {
        std::cout << "ConcreteStrategyC Construct." << std::endl;
    }

    ~ConcreteStrategyC()
    {
        std::cout << "ConcreteStrategyC Deconstruct." << std::endl;
    }

protected:
    virtual void algorithmInterface() override
    {
        std::cout << "ConcreteStrategyC Algorithm." << std::endl;
    }
};


/*
 * @Description:  定义一个context类，用来维护一个Strategy对象的引用
 */
class Context{
public:
    Strategy *strategy;
    Context(Strategy *strategy) : strategy(strategy) {}

    ~Context()
    {
        if(this->strategy)
        {
            delete this->strategy;
            this->strategy = nullptr;
        }
    }

    void ContextInterface()
    {
        this->strategy->algorithmInterface();
    }
};