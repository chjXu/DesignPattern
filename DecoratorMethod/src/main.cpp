/*
 * @Description:  装饰者模式
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-10 13:19:53
 */


/**
 * 目的：动态地给一个对象添加一些额外的职责，就增加功能而言，装饰模式比生成子类更为灵活。
*/

#include <iostream>
#include "person.h"
#include "decorator.h"
#include "concreteDecoratorA.h"
#include "concreteDecoratorB.h"

int main(){
    Person *my = new Person("xcj");

    Tshirts *shirt = new Tshirts();

    BigTrouser *bt = new BigTrouser();
    
    shirt->decorator(my);

    bt->decorator(my);

    my->show();

    shirt->show();

    bt->show();


    delete my;
    delete shirt;
    delete bt;

    return 0;
}
