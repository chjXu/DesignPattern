#pragma once

// 数据库访问的相关基类

#include "connection.h"

class IDBCommand
{
private:
    /* data */
public:
    IDBCommand();
    virtual ~IDBCommand();

    virtual void doCommand() = 0;

    virtual void setConnection(IDBConnection &) = 0;
};
