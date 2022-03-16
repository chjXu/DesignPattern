#include <iostream>
#include "videoSplitter.h"

VideoSplitter::VideoSplitter(){

}

VideoSplitter::~VideoSplitter(){

}

ISplitter* VideoSplitter::clone(){
    return new VideoSplitter(*this);
}

void VideoSplitter::split(){
    std::cout << "VideoSplitter is working..." << std::endl;
}