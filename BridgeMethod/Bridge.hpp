/**
 * 桥模式
 */

#pragma once

#include <memory>

// 实现层
class Implement{
public:
    virtual ~Implement() = default;
    virtual void method1() const = 0;
    virtual void method2() const = 0;
    virtual void method3() const = 0;
};

// 具体实现部分A
class ConcreteImpA : public Implement{
public:
    void method1() const override
    {
        std::cout << "ConcreteImpA method1..." << std::endl;
    }
    void method2() const override
    {
        std::cout << "ConcreteImpA method2..." << std::endl;
    }
    void method3() const override
    {
        std::cout << "ConcreteImpA method3..." << std::endl;
    }
};

// 具体实现部分B
class ConcreteImpB : public Implement
{
public:
    void method1() const override
    {
        std::cout << "ConcreteImpB method1..." << std::endl;
    }
    void method2() const override
    {
        std::cout << "ConcreteImpB method2..." << std::endl;
    }
    void method3() const override
    {
        std::cout << "ConcreteImpB method3..." << std::endl;
    }
};

// 抽象层
class Abstract{
public:
    explicit Abstract(std::unique_ptr<Implement> imp)
    : _imp(std::move(imp))
    {
        std::cout << "Abstract Construct..." << std::endl;
    }
    virtual ~Abstract() = default;
    
    virtual void feature1() const { _imp->method1(); }
    virtual void feature2() const{ _imp->method2(); _imp->method3(); }
protected:
    std::unique_ptr<Implement> _imp;    // bridge
};


class RefineAbstract : public Abstract{
public:
    using Abstract::Abstract;
    
    void featureN() const
    {
        std::cout << "RefineAbstract featureN..." << std::endl;
        _imp->method1();
        _imp->method3();
    }
};