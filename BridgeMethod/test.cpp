/* 将抽象部分与它的实现部分分离，使得它们可以独立地变化

    1、抽象Abstraction与实现AbstractionImplement分离;

    2、抽象部分Abstraction可以变化，如new RefinedAbstractionA(imp)、new RefinedAbstractionB(imp2);

    3、实现部分AbstractionImplement也可以变化，如new ConcreteAbstractionImplementA()、new ConcreteAbstractionImplementB();

*/

#include <iostream>
#include "Bridge.hpp"
#include "t_Bridge.hpp"

using namespace std;

int main()
{ 
    // test
    // AbstractionImplement *imp = new ConcreteAbstractionImplementA();         //实现部分ConcreteAbstractionImplementA
    // Abstract *abs = new RefineAbstractA(imp);                                //抽象部分RefinedAbstractionA
    // abs->showName();
 
    // cout << "-----------------------------------------" << endl;
    
    // AbstractionImplement* imp1 = new ConcreteAbstractionImplementB();        //实现部分ConcreteAbstractionImplementB
    // Abstract* abs1 = new RefineAbstractA(imp1);                              //抽象部分RefinedAbstractionA
    // abs1->showName();

    // cout << "-----------------------------------------" << endl;
 
    // AbstractionImplement* imp2 = new ConcreteAbstractionImplementA();        //实现部分ConcreteAbstractionImplementA     
    // Abstract* abs2 = new RefineAbstractB(imp2);                              //抽象部分RefinedAbstractionB
    // abs2->showName();

    // cout << "-----------------------------------------" << endl;
 
    // AbstractionImplement* imp3 = new ConcreteAbstractionImplementB();        //实现部分ConcreteAbstractionImplementB
    // Abstract* abs3 = new RefineAbstractB(imp3);                              //抽象部分RefinedAbstractionB
    // abs3->showName();
    // cout << endl;


    // test template
    TConcreteAbstractionImplement<int>* concreteImp = new TConcreteAbstractionImplement<int>();
    TRefineAbstract<TAbstract, TConcreteAbstractionImplement<int>> abs(concreteImp);
    abs.showName();

    delete concreteImp;

    return 0;
}
