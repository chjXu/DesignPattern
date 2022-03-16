#include <iostream>
#include "pictureSplitter.h"

PictureSplitter::PictureSplitter(){

}

PictureSplitter::~PictureSplitter(){

}

ISplitter* PictureSplitter::clone(){
    return new PictureSplitter(*this);
}

void PictureSplitter::split(){
    std::cout << "PictureSplitter is working..." << std::endl;
}