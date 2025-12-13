#pragma once
#include <iostream>
#include <memory>

//  抽象策略类：定义所有支持的算法的公共接口
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

    // 算法接口: 由具体策略类实现 
    virtual void algorithmInterface() = 0;
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
        std::cout << "Run concreteStrategyA Algorithm." << std::endl;
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
        std::cout << "Run concreteStrategyB Algorithm." << std::endl;
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
    explicit Context(std::unique_ptr<Strategy> strategy) 
    : strategy_(std::move(strategy)) {}

    // 禁止拷贝，允许移动
    Context(const Context&) = delete;
    Context& operator=(const Context&) = delete;
    Context(Context&&) noexcept = default;
    Context& operator=(Context&&) noexcept = default;
    ~Context() = default;

    void ContextInterface()
    {
        if (strategy_)
            this->strategy_->algorithmInterface();
    }

    // 运行时替换策略（传入 unique_ptr，旧策略会被销毁）
    void setStrategy(std::unique_ptr<Strategy> strategy)
    {
        strategy_ = std::move(strategy);
    }

    // 获取当前策略
    Strategy* getStrategy() const { return strategy_.get(); }
private:
    std::unique_ptr<Strategy> strategy_;
};