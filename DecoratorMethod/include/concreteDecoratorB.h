/*
 * @Description:  具体装饰者
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-10 13:12:58
 */

#pragma once

#include <string>
#include "decorator.h"

class BigTrouser : public Finery{
public:
    BigTrouser();

    ~BigTrouser();

    virtual void show() override;

protected:

private:
};