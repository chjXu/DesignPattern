// 客户端

#include "iSplitter.h"
#include "splitterFactory.h"
#include "binarySplitterFactory.h"
#include "pictureSplitterFactory.h"
#include "txtSplitterFactory.h"
#include "videoSplitterFactory.h"

class Main
{
private:
    SplitterFactory* factory; // 工厂

public:
    Main(SplitterFactory* factory){
        this->factory = factory;
    }

    ~Main();

    void button_click(){
        ISplitter* splitter = factory->createSplitter(); // 多态new
        splitter->split();
    }
};


int main(){

    Main m(new BinarySplitterFactory());
    m.button_click();

    return 0;
}