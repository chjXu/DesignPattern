/*
 * @Description:  
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-07 15:40:25
 */


#include "concreteSubject.h"

ConcreteSubject::ConcreteSubject(){

}

ConcreteSubject::~ConcreteSubject(){

}

void ConcreteSubject::attach(Observer *pObserver){
    m_ObserverList.push_back(pObserver);
}

void ConcreteSubject::detach(Observer *pObserver){
    m_ObserverList.remove(pObserver);
}

void ConcreteSubject::notify(){
    std::list<Observer *>::iterator it = m_ObserverList.begin();
    
    while(it != m_ObserverList.end()){
        (*it)->update(m_State);
        ++it;
    }
}

void ConcreteSubject::setState(int state){
    m_State = state;
}