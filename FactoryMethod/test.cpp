// 客户端

#include "Factory.hpp"
#include "t_Factory.hpp"

int main()
{
    // SplitterFactory* factory = new BinarySplitterFactory();
    // ISplitter* splitter = factory->createSplitter(); // 多态new
    // splitter->split();
    // delete splitter;
    // delete factory;

    // test template
    TSplitterFactory* factory = new TSplitterModuleFactory<std::string>("Binary");
    TISplitter* splitter = factory->createSplitter();
    splitter->split();
    delete splitter;
    delete factory;

    return 0;
}