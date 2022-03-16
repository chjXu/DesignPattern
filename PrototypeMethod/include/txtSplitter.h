#pragma once

// 文本文件分割

#include "iSplitter.h"

class TxtSplitter : public ISplitter
{
private:
    /* data */
public:
    TxtSplitter(/* args */);
    virtual ISplitter *clone();
    
    ~TxtSplitter();

    virtual void split();
};

