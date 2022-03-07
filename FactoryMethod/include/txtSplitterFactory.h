#pragma once

// 文本文件分割工厂
#include "txtSplitter.h"
#include "splitterFactory.h"

class TxtSplitterFactory : public SplitterFactory
{
private:
    /* data */
public:
    TxtSplitterFactory(/* args */);
    ~TxtSplitterFactory();

    virtual ISplitter* createSplitter();
};
