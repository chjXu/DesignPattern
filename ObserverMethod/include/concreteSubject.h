/*
 * @Description:  具体订阅者
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-07 15:27:21
 */

#pragma once
#include <string>
#include "subject.h"

class ConcreteSubject : public Subject{
public:
    ConcreteSubject();
    ~ConcreteSubject();

    void attach(Observer *pObserver);

    void detach(Observer *pObserver);

    void notify();

    void setState(int state);
    
protected:

private:
    std::list<Observer *> m_ObserverList;
    int m_State;
};