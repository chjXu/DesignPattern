/*
 * @Description:  
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-04 10:39:56
 */


#include "context.h"

Context::Context(StrategyClass *strategy){
    this->strategy = strategy;
}

Context::~Context(){
    if(this->strategy) delete this->strategy;
}

void Context::ContextInterface(){
    this->strategy->algorithmInterface();
}