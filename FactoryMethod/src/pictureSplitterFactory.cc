#include "pictureSplitterFactory.h"

PictureSplitterFactory::PictureSplitterFactory(){

}

PictureSplitterFactory::~PictureSplitterFactory(){

}

ISplitter* PictureSplitterFactory::createSplitter(){
    return new PictureSplitter();
}