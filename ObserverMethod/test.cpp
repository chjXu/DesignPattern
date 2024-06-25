/*
 * @Description:  观察者模式
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-07 15:57:13
 */


/**
 * 目的：定义一种一对多的关系，让多个观察者对象同时监听某一个主题对象。
 *      这个主题对象在状态发生时，通知所有观察者对象，使他们能够自动更新自己。
 * 
 * 应该场景：
 * 
 * 存在问题：

 * 1、一旦某个业务逻辑发生改变，如购票业务中增加其他业务逻辑，需要修改购票核心文件、甚至购票流程。

 * 2、日积月累后，文件冗长，导致后续维护困难。

 *

 * 存在问题原因主要是程序的"紧密耦合"，使用观察模式将目前的业务逻辑优化成"松耦合"，达到易维护、易修改的目的，

 * 同时也符合面向接口编程的思想。

 *

 * 观察者模式典型实现方式：

 * 1、定义2个接口：观察者（通知）接口、被观察者（主题）接口

 * 2、定义2个类，观察者对象实现观察者接口、主题类实现被观者接口

 * 3、主题类注册自己需要通知的观察者

 * 4、主题类某个业务逻辑发生时通知观察者对象，每个观察者执行自己的业务逻辑。
*/

#include <iostream>
#include <vector>
#include "Observer.hpp"

int main(){
    // Creat Subject
    ConcreteSubject *subject = new ConcreteSubject();

    // Create 10 Observer
    std::vector<Observer*> observers;
    for(int i=0; i<10; i++){
        Observer *observer = new ConcreteObserver(subject, i);
        observers.push_back(observer);
    }

    // Register the observer, add observer to subject list
    for(int i=0; i<observers.size(); ++i)
        subject->attach(observers[i]);

    // init the state
    subject->setState(-1);
    subject->notify();

    // update
    subject->setState(0);
    subject->notify();

    // UnRegister the observer
    for(int i=0; i < observers.size(); ++i)
    {
        subject->detach(observers[i]);
        // subject->setState(i++);
        // subject->notify();
    }

    for(auto it : observers)
        delete it;
        
    delete subject;

    return 0;
}
