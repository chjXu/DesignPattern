/*
 * @Description:  抽象类
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-03 20:51:31
 */

/**
 * 抽象模板，定义并实现一个模板方法。
 * 这个方法是一个顶级逻辑的骨架，其具体方法推迟到子类实现。
 */

#pragma once
#include <iostream>

using namespace std;

class AbstractClass
{
public:
    AbstractClass();

    ~AbstractClass();

    /**
     * @description: 公共方法，每一个继承的类都调用该方法，并实现其中间过程。
     * @param {*}
     * @return {*}
     */    
    void TemplateMethod();

protected:
    /**
     * @description: 过程1，在子类中实现。
     * @param {*}
     * @return {*}
     */    
    virtual void privateOperation1();

    /**
     * @description: 过程2，在子类中实现。
     * @param {*}
     * @return {*}
     */    
    virtual void privateOperation2();

private:
};