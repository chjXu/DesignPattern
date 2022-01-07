/*
 * @Description:  
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-07 15:58:18
 */


#include "concreteObserver.h"

ConcreteObserver::ConcreteObserver(Subject *pSubject, int i):
    m_pSubject(pSubject), id(i)
{

}


void ConcreteObserver::update(int value){
    std::cout << "ConcreteObserver: " << id << " get the update. New State:" << value << std::endl;
}