/*
 * @Description:  
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-10 13:04:32
 */

#include "decorator.h"

Finery::Finery(){

}

Finery::~Finery(){

}

void Finery::decorator(Person *component){
    this->component = component;
}

void Finery::show(){
    if(component != nullptr){
        component->show();
    }
}