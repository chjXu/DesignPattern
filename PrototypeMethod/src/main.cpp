// 客户端

#include "iSplitter.h"
#include "binarySplitter.h"
#include "pictureSplitter.h"
#include "txtSplitter.h"
#include "videoSplitter.h"

class Main
{
private:
    ISplitter* prototype; // 原型对象，供克隆的

public:
    Main(ISplitter* prototype){
        this->prototype = prototype;
    }

    ~Main();

    void button_click(){
        ISplitter* splitter = prototype->clone();
        splitter->split();
    }
};


int main(){

    Main m(new BinarySplitter());
    m.button_click();

    return 0;
}