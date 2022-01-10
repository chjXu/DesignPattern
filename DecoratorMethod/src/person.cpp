/*
 * @Description:  
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-10 13:19:24
 */


#include <iostream>
#include "person.h"

Person::Person(){
    
}

Person::Person(std::string name){
    this->name = name;
}

Person::~Person(){

}

void Person::show(){
    std::cout << "cloths is: " << name << std::endl;
}
