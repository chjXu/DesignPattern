#pragma once

// 支持Oracle server

#include "command.h"

class OracleCommand : public IDBCommand
{
private:
    /* data */
public:
    OracleCommand(/* args */);
    ~OracleCommand();

    void doCommand();

    void setConnection(IDBConnection &connection);
};
