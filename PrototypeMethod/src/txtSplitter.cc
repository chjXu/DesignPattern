#include <iostream>
#include "txtSplitter.h"

TxtSplitter::TxtSplitter(){

}

TxtSplitter::~TxtSplitter(){

}

ISplitter* TxtSplitter::clone(){
    return new TxtSplitter(*this);
}


void TxtSplitter::split(){
    std::cout << "TxtSplitter is working..." << std::endl;
}