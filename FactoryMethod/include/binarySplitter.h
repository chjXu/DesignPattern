#pragma once

// 二进制文件分割具体类

#include "iSplitter.h"

class BinarySplitter : public ISplitter
{
private:
    /* data */
public:
    BinarySplitter(/* args */);
    ~BinarySplitter();

    virtual void split();
};
