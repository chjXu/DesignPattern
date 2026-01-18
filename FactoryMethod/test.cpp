// 客户端

#include "Factory.hpp"
#include "t_Factory.hpp"

int main()
{
    std::unique_ptr<Creator> creator;
    creator = std::make_unique<ConcreteCreatorA>();
    creator->someOperation();

    creator = std::make_unique<ConcreteCreatorB>();
    creator->someOperation();

    return 0;
}