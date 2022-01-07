/*
 * @Description:  具体观察者
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-07 15:53:40
 */


#pragma once
#include <string>
#include <iostream>
#include "observer.h"
#include "subject.h"

class ConcreteObserver : public Observer{
public:
    ConcreteObserver(Subject *pSubject, int i);

    void update(int value);

protected:

private:
    Subject *m_pSubject;
    int id;
};