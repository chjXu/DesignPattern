/*
 * @Description:  具体装饰者
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-10 13:12:43
 */

#pragma once

#include <string>
#include "decorator.h"

class Tshirts : public Finery{
public:
    Tshirts();

    ~Tshirts();

    virtual void show() override;

protected:

private:
};