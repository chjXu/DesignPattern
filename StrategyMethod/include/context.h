/*
 * @Description:  定义一个context类，用来维护一个Strategy对象的引用
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-04 10:39:46
 */


#pragma once
#include <iostream>
#include "strategyClass.h"


class Context{
public:
    StrategyClass *strategy;
    Context(StrategyClass *strategy);

    ~Context();

    void ContextInterface();

protected:
    

private:

};
