#pragma once

// 工厂

#include "iSplitter.h"

class SplitterFactory
{
private:
    /* data */
public:
    SplitterFactory(/* args */);
    virtual ~SplitterFactory();

    virtual ISplitter *createSplitter() = 0;
};
