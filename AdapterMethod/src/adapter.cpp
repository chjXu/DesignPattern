/*
 * @Description: 
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-03 20:47:06
 */

/**
 * 我发现将不同文件分开编写代码，在学习阶段不太友好
*/


#include <iostream>
using namespace std;


// 目标接口（新接口）
class ITarget{
public:
    virtual void process()=0;
};

// 遗留接口（老接口）
class IAdaptee{
public:
    virtual void foo(int data)=0;
    virtual int bar()=0;
};

// 遗留类型
class OldCalss : public IAdaptee{
public:
    //...
};

// 对象适配器
class Adapter : public ITarget{ // 继承
protected:
    IAdaptee* pAdaptee; // 组合

public:
    Adapter(IAdaptee* pAdaptee){
        this->pAdaptee = pAdaptee;
    }

    virtual void process(){
        int  data = pAdaptee->bar();
        pAdaptee->foo(data);
    }
};

// 类适配器
// class Adapter : public ITarget, protected IAdaptee{
// protected:
// }

int main(){
    IAdaptee* pAdaptee = new OldCalss();

    ITarget* pTarget = new Adapter(pAdaptee);
    pTarget->process();
}