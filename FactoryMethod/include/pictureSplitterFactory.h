#pragma once

// 图像文件分割工厂
#include "pictureSplitter.h"
#include "splitterFactory.h"

class PictureSplitterFactory : public SplitterFactory
{
private:
    /* data */
public:
    PictureSplitterFactory(/* args */);
    ~PictureSplitterFactory();

    virtual ISplitter* createSplitter();
};
