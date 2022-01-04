/*
 * @Description: 策略模式
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-04 10:43:36
 */

/**
 * 策略模式定义了算法家族，分别封装起来，让他们之间可以互相替换。
 * 此模式让算法的变化，不会影响到使用算法的客户。
 * 
*/


#include <iostream>
#include "context.h"
#include "concreteStrategyA.h"
#include "concreteStrategyB.h"

#include "concreteStrategyC.h" // 新增

using namespace std;

int main(){
    
    Context *c1 = new Context(new ConcreteStrategyA());
    c1->ContextInterface();

    Context *c2 = new Context(new ConcreteStrategyB());
    c2->ContextInterface();

    // 新增
    Context *c3 = new Context(new ConcreteStrategyC());
    c3->ContextInterface();

    if(c1) delete c1;
    if(c2) delete c2;

    if(c3) delete c3;
    
    cout << "End!" << endl;
}