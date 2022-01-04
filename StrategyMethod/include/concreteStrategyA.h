/*
 * @Description:  A策略
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-04 10:35:24
 */
#pragma once
#include <iostream>
#include "strategyClass.h"

using namespace std;

class ConcreteStrategyA : public StrategyClass{
public:

    ConcreteStrategyA();

    ~ConcreteStrategyA();

protected:
    virtual void algorithmInterface() override;

private:


};