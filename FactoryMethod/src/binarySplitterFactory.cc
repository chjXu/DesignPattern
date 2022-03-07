#include "binarySplitterFactory.h"

BinarySplitterFactory::BinarySplitterFactory(){

}

BinarySplitterFactory::~BinarySplitterFactory(){

}

ISplitter* BinarySplitterFactory::createSplitter(){
    return new  BinarySplitter();  
}