#pragma once

// 支持SQL server

#include "connection.h"

class SQLConnection : public IDBConnection
{
private:
    /* data */
public:
    SQLConnection(/* args */);
    ~SQLConnection();

    void doConnection();
};
