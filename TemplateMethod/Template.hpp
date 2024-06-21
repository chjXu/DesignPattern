/**
 * 抽象模板，定义并实现一个模板方法。
 * 这个方法是一个顶级逻辑的骨架，其具体方法推迟到子类实现。
 */

#pragma once
#include <iostream>

class AbstractClass
{
public:
    AbstractClass() 
    {
        std::cout << "AbstractClass Construct ..." << std::endl;
    }
    virtual ~AbstractClass() 
    {
        std::cout << "AbstractClass DeConstruct ..." << std::endl;
    }

    /**
     * @description: 公共方法，每一个继承的类都调用该方法，并实现其中间过程。
     * @param {*}
     * @return {*}
     */    
    void TemplateMethod()
    {
        if(Step1())
        {
            Step2();
        }

        if(Step3())
        {
            Step4();
        }
    }

protected:
    /**
     * @description: 过程2，在子类中实现。
     * @param {*}
     * @return {*}
     */    
    virtual void Step2() = 0;

    /**
     * @description: 过程4，在子类中实现。
     * @param {*}
     * @return {*}
     */    
    virtual void Step4() = 0;

private:
    virtual bool Step1()
    {
        std::cout << "AbstractClass Step1 ..." << std::endl;
        return true;
    }

    // 稳定的代码不要写成虚函数，即不能 override
    bool Step3()
    {
        std::cout << "AbstractClass Step3 ..." << std::endl;
        return true;
    }
};


class ConcreteClassA : public AbstractClass{
public:
    ConcreteClassA() 
    {
        std::cout << "ConcreteClassA Construct ..." << std::endl;
    }

protected:
    ~ConcreteClassA() 
    {
        std::cout << "ConcreteClassA DeConstruct ..." << std::endl;
    }

    virtual void Step2() override
    {
        std::cout << "ConcreteClassA Step2 ..." << std::endl;
    }

    // 禁止 override
    // virtual void Step3() override
    // {
    //     std::cout << "ConcreteClassA Step3 ..." << std::endl;
    // }

    virtual void Step4() override
    {
        std::cout << "ConcreteClassA Step4 ..." << std::endl;
    }

private:
};


class ConcreteClassB : public AbstractClass{
public:
    ConcreteClassB() 
    {
        std::cout << "ConcreteClassB Construct ..." << std::endl;
    }

protected:
    ~ConcreteClassB() 
    {
        std::cout << "ConcreteClassB DeConstruct ..." << std::endl;
    }

    virtual bool Step1() override
    {
        std::cout << "ConcreteClassB Step1 ..." << std::endl;
        return false;
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