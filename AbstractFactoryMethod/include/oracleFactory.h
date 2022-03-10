#pragma once


#include "abstractFactory.h"

class OracleFactory : public AbstractFactory{
public:
    OracleFactory();
    ~OracleFactory();

    virtual IDBConnection* createConnection() = 0;
    virtual IDBCommand* createCommand() = 0;
    virtual IDBDatareader* createDatareder() = 0;
private:

};