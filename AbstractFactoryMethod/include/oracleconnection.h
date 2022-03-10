#pragma once

// 支持Oracle server

#include "connection.h"

class OracleConnection : public IDBConnection
{
private:
    /* data */
public:
    OracleConnection(/* args */);
    ~OracleConnection();

    void doConnection();
};

