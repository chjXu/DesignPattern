#include "txtSplitterFactory.h"

TxtSplitterFactory::TxtSplitterFactory(){

}

TxtSplitterFactory::~TxtSplitterFactory(){

}

ISplitter* TxtSplitterFactory::createSplitter(){
    return new TxtSplitter();
}