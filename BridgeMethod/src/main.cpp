/*
 * @Description:  桥模式
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-14 11:06:35
 */


 /* 将抽象部分与它的实现部分分离，使得它们可以独立地变化

    1、抽象Abstraction与实现AbstractionImplement分离;

    2、抽象部分Abstraction可以变化，如new RefinedAbstractionA(imp)、new RefinedAbstractionB(imp2);

    3、实现部分AbstractionImplement也可以变化，如new ConcreteAbstractionImplementA()、new ConcreteAbstractionImplementB();

*/

#include <iostream>
#include "abstract.h"
#include "refineAbstractA.h"
#include "refineAbstractB.h"
#include "concreteAbstractionImplementA.h"
#include "concreteAbstractionImplementB.h"

using namespace std;

int main(){ 

    AbstractionImplement *imp = new ConcreteAbstractionImplementA(); //实现部分ConcreteAbstractionImplementA
    Abstract *abs = new RefineAbstractA(imp); //抽象部分RefinedAbstractionA
    abs->showName();
 
    cout << "-----------------------------------------" << endl;
    
    AbstractionImplement* imp1 = new ConcreteAbstractionImplementB();        //实现部分ConcreteAbstractionImplementB
    Abstract* abs1 = new RefineAbstractA(imp1);                        //抽象部分RefinedAbstractionA
    abs1->showName();

    cout << "-----------------------------------------" << endl;
 
    AbstractionImplement* imp2 = new ConcreteAbstractionImplementA();        //实现部分ConcreteAbstractionImplementA     
    Abstract* abs2 = new RefineAbstractB(imp2);                        //抽象部分RefinedAbstractionB
    abs2->showName();

    cout << "-----------------------------------------" << endl;
 
    AbstractionImplement* imp3 = new ConcreteAbstractionImplementB();        //实现部分ConcreteAbstractionImplementB
    Abstract* abs3 = new RefineAbstractB(imp3);                        //抽象部分RefinedAbstractionB
    abs3->showName();
     
    
    cout << endl;
    return 0;
}
