#pragma once

// 二进制文件分割工厂
#include "binarySplitter.h"
#include "splitterFactory.h"

class BinarySplitterFactory : public SplitterFactory
{
private:
    /* data */
public:
    BinarySplitterFactory(/* args */);
    ~BinarySplitterFactory();

    virtual ISplitter* createSplitter();
};
