#pragma once

// 支持SQL server

#include "datareader.h"

class SQLDatareader : public IDBDatareader
{
private:
    /* data */
public:
    SQLDatareader(/* args */);
    ~SQLDatareader();

    void doDatareader();
};
