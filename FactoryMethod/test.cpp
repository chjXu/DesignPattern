// 客户端

#include "Factory.hpp"

int main()
{
    SplitterFactory* factory = new BinarySplitterFactory();
    ISplitter* splitter = factory->createSplitter(); // 多态new
    splitter->split();

    delete splitter;
    delete factory;

    return 0;
}