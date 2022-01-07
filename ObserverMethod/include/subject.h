/*
 * @Description:  观察者（通知）类
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-07 15:43:48
 */

#pragma once
#include <list>
#include "observer.h"

class Subject{
public:
    virtual void attach(Observer *) = 0;

    virtual void detach(Observer *) = 0;

    virtual void notify() = 0;

protected:

private:
};