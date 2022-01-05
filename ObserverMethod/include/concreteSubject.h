/*
 * @Description:  具体订阅者
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-05 11:10:23
 */

#pragma once
#include <string>
#include "subject.h"

class ConcreteSubject : public Subject{
public:
    ConcreteSubject();
    ~ConcreteSubject();

    std::string get() const;

    void set(std::string &value);
    
protected:

private:
    std::string subjectState;
};