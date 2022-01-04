/*
 * @Description:  
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-04 10:43:05
 */


#include "concreteStrategyC.h"

ConcreteStrategyC::ConcreteStrategyC(){
    cout << "C construct." << endl;
}

ConcreteStrategyC::~ConcreteStrategyC(){
    cout << "C deconstruct." << endl;
}

void ConcreteStrategyC::algorithmInterface(){
    cout << "C1" << endl;
}