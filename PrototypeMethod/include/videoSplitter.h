#pragma once

// 视频文件分割

#include "iSplitter.h"

class VideoSplitter : public ISplitter
{
private:
    /* data */
public:
    VideoSplitter(/* args */);
    virtual ISplitter *clone();
    
    ~VideoSplitter();

    virtual void split();
};