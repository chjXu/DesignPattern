/*
 * @Description:  抽象接口
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-10 13:19:16
 */


#pragma once
#include <string>

class Person{
public:
    Person();
    Person(std::string name);

    ~Person();

    virtual void show();

protected:

private:
    std::string name;
};