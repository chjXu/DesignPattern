#pragma once

// 抽象工厂
/**
 * 对于一种数据格式，其conenct，command, reader是具有“强内聚”特点的
 * 抽象工厂就是解决普通工厂之间的关系型问题的
*/

#include "connection.h"
#include "command.h"
#include "datareader.h"

class AbstractFactory{
public:
    AbstractFactory();
    ~AbstractFactory();

    virtual IDBConnection* createConnection() = 0;
    virtual IDBCommand* createCommand() = 0;
    virtual IDBDatareader* createDatareder() = 0;

private:

};