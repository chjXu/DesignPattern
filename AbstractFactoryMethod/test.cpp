// 客户端

#include "AbstractFactory.hpp"



int main()
{
    std::unique_ptr<AbstractFactory> factory =
        std::make_unique<ConcreteFactory1>();

    auto productA = factory->createProductA();  // F1 A
    auto productB = factory->createProductB();  // F1 B
    productA->use();
    productB->use();

    // 切换到另一个具体工厂
    factory = std::make_unique<ConcreteFactory2>();
    productA = factory->createProductA();  // F2 A
    productB = factory->createProductB();  // F2 B
    productA->use();
    productB->use();
}