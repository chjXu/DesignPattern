/*
 * @Description:  具体观察者
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-05 11:14:21
 */


#pragma once
#include <string>
#include "observer.h"
#include "concreteSubject.h"

class ConcreteObserver : public Observer{
public:
    ConcreteObserver(ConcreteSubject &subject, std::string name);
    ~ConcreteObserver();

    virtual void update() override;

protected:

private:
    std::string name;
    std::string observerState;
    ConcreteSubject subject;
};