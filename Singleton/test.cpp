#include "singleton.hpp"

int main()
{
    Singleton* s_instance = Singleton::getInstance();
    s_instance->setID(100);
    std::cout << s_instance->getID() << std::endl;

    delete s_instance;
    return 0;
}