/*
 * @Description:  
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-14 11:04:51
 */


#pragma once

#include "abstract.h"
#include "abstractImplement.h"

class RefineAbstractB : public Abstract{
public:
    RefineAbstractB(AbstractionImplement *imp);
    virtual ~RefineAbstractB();
    virtual void showName();
protected:

private:
    AbstractionImplement *_imp;
};