/*
 * @Description:  
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-14 11:00:05
 */


#include "refineAbstractA.h"

RefineAbstractA::RefineAbstractA(AbstractionImplement *imp){
    this->_imp = imp;
}

RefineAbstractA::~RefineAbstractA(){
    delete this->_imp;
    this->_imp = nullptr;
}

void RefineAbstractA::showName(){
    this->_imp->showName();
}