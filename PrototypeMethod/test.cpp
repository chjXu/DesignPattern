#include "prototype.hpp"
#include <iostream>

int main() {
    // 创建一个原始对象
    ConcretePrototype* original = new ConcretePrototype("原型A");
    std::cout << "Original object: ";
    original->show();

    // 克隆出新对象
    Prototype* copy1 = original->clone();
    std::cout << "Cloned object 1: ";
    copy1->show();

    // 再克隆一个并修改状态
    ConcretePrototype* copy2 = dynamic_cast<ConcretePrototype*>(original->clone());
    if(copy2) {
        copy2->setName("克隆B");
    }
    std::cout << "Cloned object 2: ";
    copy2->show();

    // 释放内存
    delete original;
    delete copy1;
    delete copy2;

    std::cout << "\n==========================\n";
    std::cout << "深拷贝\n";

    DeepPrototype* dp1 = new DeepPrototype("DeepObject", 100);
    DeepPrototype* dp2 = dynamic_cast<DeepPrototype*>(dp1->clone());

    dp2->setValue(999);

    std::cout << "\nOriginal:\n";
    dp1->show();

    std::cout << "\nClone:\n";
    dp2->show();

    delete dp1;
    delete dp2;

    return 0;
}