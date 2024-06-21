/**
 * 模板模式定义一个算法操作中的骨架，而将一些步骤延迟到子类中。
 * 模板方法时的子类可以不改变一个算法的结构即可重定义该算法的某些特定步骤。
*/

#include "Template.hpp"

int main(){
    
    AbstractClass *absA = new ConcreteClassA();
    absA->TemplateMethod();


    AbstractClass *absB = new ConcreteClassB();
    absB->TemplateMethod();

    if(absA != nullptr) delete(absA);
    if(absB != nullptr) delete(absB);

    return 0;
}