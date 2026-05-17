#include "Builder.hpp"

int main()
{
    // Director director;
    // ConcreteBuilder builder;
    // director.setBuilder(&builder);
    // director.construct();
    // auto product = builder.build();
    // product->show();

    // 现代C++建造者模式
    ConcreteBuilder builder;
    auto product =
        builder.buildPartA()
               .buildPartB()
               .buildPartC()
               .build();
    product->show();
    

    return 0;
}