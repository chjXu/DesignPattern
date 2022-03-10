#pragma once

// 支持SQL server

#include "command.h"

class SQLCommand : public IDBCommand
{
private:
    /* data */
public:
    SQLCommand(/* args */);
    ~SQLCommand();

    void doCommand();

    void setConnection(IDBConnection &connection);
};
