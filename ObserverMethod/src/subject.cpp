/*
 * @Description:  
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-05 10:59:56
 */


#include "subject.h"

Subject::Subject(){

}

Subject::~Subject(){

}

void Subject::attach(Observer &observer){
    observers.push_back(observer);
}

void Subject::detach(Observer &observer){
    for(auto it : observers){
        if(it == observer)
            it = observers.erase(it);
    }
}

void Subject::notify(){
    for(auto it : observers){
        it.update();
    }
}