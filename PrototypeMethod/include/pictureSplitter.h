#pragma once

// 图像文件分割

#include "iSplitter.h"

class PictureSplitter : public ISplitter
{
private:
    /* data */
public:
    PictureSplitter(/* args */);
    virtual ISplitter *clone();
    
    ~PictureSplitter();

    virtual void split();
};
