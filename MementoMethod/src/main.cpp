/*
 * @Description: 
 * @Author: chengjun_xu
 * @Data: Do not edit
 * @LastAuthor: Do not edit
 * @LastEditTime: 2022-01-03 20:47:06
 */



#include <iostream>
#include <string>

using namespace std;

class Memnoto{
public:
    Memnoto(const string &s): state(s){}
    string getState() const {return state;}
    void setState(const string &s) {state = s;}
protected:

private:
    std::string state;
};

class Originator{
public:
    Originator(){}
    ~Originator(){}

    Memnoto cerateMemnoto(){
        Memnoto m(state);
        return m;
    }

    void setMemnoto(const Memnoto &memnoto){
        state = memnoto.getState();
    }
protected:

private:
    std::string state;
};




int main(){
    Originator originator;

    // 捕获对象状态， 存储到备忘录
    Memnoto mem = originator.cerateMemnoto();

    // 改变originator状态
    // ...

    // 从备忘录中恢复 
    originator.setMemnoto(mem)
}