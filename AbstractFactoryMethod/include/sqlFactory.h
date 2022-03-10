#pragma once


#include "abstractFactory.h"

class SQLFactory : public AbstractFactory{
public:
    SQLFactory();
    ~SQLFactory();

    IDBConnection* createConnection() = 0;
    IDBCommand* createCommand() = 0;
    IDBDatareader* createDatareder() = 0;
private:

};