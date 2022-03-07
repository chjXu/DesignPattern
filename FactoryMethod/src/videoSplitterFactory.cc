#include "videoSplitterFactory.h"

VideoSplitterFactory::VideoSplitterFactory(){

}

VideoSplitterFactory::~VideoSplitterFactory(){

}

ISplitter* VideoSplitterFactory::createSplitter(){
    return new VideoSplitter();
}