/**
 * 抽象模板，定义并实现一个模板方法。
 * 这个方法是一个顶级逻辑的骨架，其具体方法推迟到子类实现。
 * 下面这一段代码是经典的（奇异递归模板模式）CRTP技术
 */

#pragma once
#include <iostream>

template<typename T>
class TAbstractClass
{
public:
    virtual ~TAbstractClass() 
    {
        std::cout << "TAbstractClass DeConstruct ..." << std::endl;
    }

    /**
     * @description: 公共方法，每一个继承的类都调用该方法，并实现其中间过程。
     * @param {*}
     * @return {*}
     */    
    void TemplateMethod()
    {
        // T& derived = static_cast<T&>(*this);
        // if(derived.Step1())
        // {
        //     derived.Step2();
        // }

        // if(derived.Step3())
        // {
        //     derived.Step4();
        // }

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
    /**
     * 防止笔误，出现编译错误
     * 如 class ConcreteClass1 : public TAbstractClass<ConcreteClass2>
     */
    TAbstractClass() 
    {
        std::cout << "TAbstractClass Construct ..." << std::endl;
    }
    friend T;

    virtual bool Step1()
    {
        std::cout << "TAbstractClass Step1 ..." << std::endl;
        return true;
    }

    // 稳定的代码不要写成虚函数，即不能 override
    bool Step3()
    {
        std::cout << "TAbstractClass Step3 ..." << std::endl;
        return true;
    }
};


template<typename T>
class TConcreteClassA : public TAbstractClass<TConcreteClassA<T> >{
public:
    TConcreteClassA() 
    {
        std::cout << "TConcreteClassA Construct ..." << std::endl;
    }

    ~TConcreteClassA() 
    {
        std::cout << "TConcreteClassA DeConstruct ..." << std::endl;
    }

protected:
    virtual void Step2() override
    {
        std::cout << "TConcreteClassA Step2 ..." << std::endl;
    }

    // 禁止 override
    // virtual void Step3() override
    // {
    //     std::cout << "TConcreteClassA Step3 ..." << std::endl;
    // }

    virtual void Step4() override
    {
        std::cout << "TConcreteClassA Step4 ..." << std::endl;
    }

private:
};


class TConcreteClassB : public TAbstractClass<TConcreteClassB>{
public:
    TConcreteClassB() 
    {
        std::cout << "TConcreteClassB Construct ..." << std::endl;
    }

    ~TConcreteClassB() 
    {
        std::cout << "TConcreteClassB DeConstruct ..." << std::endl;
    }

protected:
    virtual void Step2() override
    {
        std::cout << "TConcreteClassB Step2 ..." << std::endl;
    }

    // 禁止 override
    // virtual void Step3() override
    // {
    //     std::cout << "TConcreteClassB Step3 ..." << std::endl;
    // }

    virtual void Step4() override
    {
        std::cout << "TConcreteClassB Step4 ..." << std::endl;
    }

private:
};