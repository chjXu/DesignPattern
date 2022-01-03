/*
 * @Description: 模板模式
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-03 20:47:06
 */

/**
 * 模板模式定义一个算法操作中的骨架，而将一些步骤延迟到子类中。
 * 模板方法时的子类可以不改变一个算法的结构即可重定义该算法的某些特定步骤。
*/


#include <iostream>
#include "abstractClass.h"
#include "concreteClassA.h"
#include "concreteClassB.h"

using namespace std;

int main(){
    
    AbstractClass *absA = new ConcreteClassA();
    absA->TemplateMethod();


    AbstractClass *absB = new ConcreteClassB();
    absB->TemplateMethod();

    if(absA) delete(absA);
    if(absB) delete(absB);

    cout << "End!" << endl;
}