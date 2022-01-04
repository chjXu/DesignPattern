/*
 * @Description:  策略类，定义所有算法接口
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-04 10:32:07
 */


#pragma once
#include <iostream>

using namespace std;

class StrategyClass
{
public:
    StrategyClass();

    ~StrategyClass();

    /**
     * @description: 算法接口，每一个继承的类都调用该方法，并实现其中间过程。
     * @param {*}
     * @return {*}
     */    
    virtual void algorithmInterface();

protected:
  
private:
};