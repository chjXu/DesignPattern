#include "singleton.h"

int main(){
    Singleton* singleton = Singleton::getInstance();
    singleton->m_instance;

    delete singleton;
    return 0;
}