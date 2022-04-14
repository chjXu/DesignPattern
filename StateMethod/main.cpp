#include <iostream>

using namespace std;

class NetworkState{
public:
    NetworkState* pNext;
    virtual void Operation1()=0;
    virtual void Operation2()=0;
    virtual void Operation3()=0;

    virtual ~NetworkState()

private:

};

class OpenState : public NetworkState{
    static NetworkState* m_instance;
public:
    static NetworkState* getInstance(){
        if(m_instance == nullptr){
            m_instance = new OpenState();
        }
        return m_instance;
    }

    void Operator1(){
        // ...
        pNext = CloseState::getInstance();
    }

    void Operator2(){
        pNext = OpenState::getInstance();
    }

};

class CloseState : public NetworkState{
    static NetworkState* m_instance;
public:
    static NetworkState* getInstance(){
        if(m_instance == nullptr){
            m_instance = new OpenState();
        }
        return m_instance;
    }

    void Operator1(){
        // ...
        pNext = CloseState::getInstance();
    }

    void Operator2(){
        pNext = OpenState::getInstance();
    }

};

class NetworkProcessor{
public:
    NetworkProcessor(NetworkState* pState){
        this->pState = pState;
    }

    void Operation1(){
        // ...
        pState->Operation1();
        pState = pState->pNext;
        // ...
    }

    void Operation2(){
        // ...
        pState->Operation2();
        pState = pState->pNext;
        // ...
    }

private:
    NetworkState* pState;
};


int main(){

    return 0;
}