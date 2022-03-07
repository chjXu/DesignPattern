#pragma once

// 视频文件分割

#include "iSplitter.h"

class VideoSplitter : public ISplitter
{
private:
    /* data */
public:
    VideoSplitter(/* args */);
    ~VideoSplitter();

    virtual void split();
};