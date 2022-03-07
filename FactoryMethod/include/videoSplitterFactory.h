#pragma once

// 视频文件分割工厂
#include "videoSplitter.h"
#include "splitterFactory.h"

class VideoSplitterFactory : public SplitterFactory
{
private:
    /* data */
public:
    VideoSplitterFactory(/* args */);
    ~VideoSplitterFactory();

    virtual ISplitter* createSplitter();
};
