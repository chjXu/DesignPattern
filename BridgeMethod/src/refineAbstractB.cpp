/*
 * @Description:  
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-14 11:00:17
 */


#include "refineAbstractB.h"

RefineAbstractB::RefineAbstractB(AbstractionImplement *imp){
    this->_imp = imp;
}

RefineAbstractB::~RefineAbstractB(){
    delete this->_imp;
    this->_imp = nullptr;
}

void RefineAbstractB::showName(){
    this->_imp->showName();
}