/*
 * @Description:  B策略
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-04 10:41:20
 */
#pragma once
#include <iostream>
#include "strategyClass.h"

using namespace std;

class ConcreteStrategyB : public StrategyClass{
public:
    ConcreteStrategyB();

    ~ConcreteStrategyB();

protected:

    virtual void algorithmInterface() override;

private:


};