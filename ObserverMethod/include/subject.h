/*
 * @Description:  观察者（通知）类
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-05 10:58:46
 */

#pragma once
#include <vector>
#include "observer.h"

class Subject{
public:
    Subject();
    ~Subject();

    void attach(Observer &observer);

    void detach(Observer &observer);

    void notify();

protected:

private:
    std::vector<Observer> observers; // 观察者容器

};