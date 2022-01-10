/*
 * @Description:  装饰对象
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-10 12:58:17
 */

#pragma once

#include "person.h"

class Finery : public Person{
public:
    Finery();

    ~Finery();

    void decorator(Person *component);

    virtual void show() override;

protected:
    Person *component;
private:

};