/*
 * @Description:  C策略
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-04 10:42:02
 */


#pragma once
#include <iostream>
#include "strategyClass.h"

using namespace std;

class ConcreteStrategyC : public StrategyClass{
public:
    ConcreteStrategyC();

    ~ConcreteStrategyC();

protected:

    virtual void algorithmInterface() override;

private:


};