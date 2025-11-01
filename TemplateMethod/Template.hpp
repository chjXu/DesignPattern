/**
 * 抽象模板，定义并实现一个模板方法。
 * 这个方法是一个顶级逻辑的骨架，其具体方法推迟到子类实现。
 */

#pragma once
#include <iostream>

class AbstractClass
{
public:
    AbstractClass() = default;
    virtual ~AbstractClass() = default;

    AbstractClass(const AbstractClass&) = delete;
    AbstractClass& operator=(const AbstractClass&) = delete;

    // 模板方法：算法骨架，不允许子类修改
    virtual void TemplateMethod() final
    {
        if(Step1()) Step2();
        if(Step3()) Step4();
    }
protected:
    // 过程1，可以有默认实现，允许子类覆盖
    virtual bool Step1()
    {
        std::cout << "AbstractClass Step1 ..." << std::endl;
        return true;
    }
    // 过程2，在子类中实现。
    virtual void Step2() = 0;

    // 过程4，在子类中实现。
    virtual void Step4() = 0;
private:
    // 过程3，默认实现，不允许子类覆盖
    bool Step3()
    {
        std::cout << "AbstractClass Step3 ..." << std::endl;
        return true;
    }
};


class ConcreteClassA : public AbstractClass{
public:
    ConcreteClassA() = default;
    ~ConcreteClassA() override = default;

protected:
    virtual void Step2() override
    {
        std::cout << "ConcreteClassA Step2 ..." << std::endl;
    }
    virtual void Step4() override
    {
        std::cout << "ConcreteClassA Step4 ..." << std::endl;
    }
private:
};


class ConcreteClassB : public AbstractClass{
public:
    ConcreteClassB() = default;
    ~ConcreteClassB() override = default;

protected:
    virtual bool Step1() override
    {
        std::cout << "ConcreteClassB Step1 ..." << std::endl;
        return true;
    }

    virtual void Step2() override
    {
        std::cout << "ConcreteClassB Step2 ..." << std::endl;
    }

    virtual void Step4() override
    {
        std::cout << "ConcreteClassB Step4 ..." << std::endl;
    }

private:
};