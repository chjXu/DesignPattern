#include <iostream>
#include "binarySplitter.h"

BinarySplitter::BinarySplitter(){

}

BinarySplitter::~BinarySplitter(){

}

ISplitter* BinarySplitter::clone(){
    return new BinarySplitter(*this);
}

void BinarySplitter::split(){
    std::cout << "BinarySplitter is working..." << std::endl;
}