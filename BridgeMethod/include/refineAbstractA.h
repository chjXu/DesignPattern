/*
 * @Description:  具体对象
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-14 11:04:01
 */


#pragma once

#include "abstract.h"
#include "abstractImplement.h"

class RefineAbstractA : public Abstract{
public:
    RefineAbstractA(AbstractionImplement *imp);
    virtual ~RefineAbstractA();
    virtual void showName();
protected:

private:
    AbstractionImplement *_imp;
};