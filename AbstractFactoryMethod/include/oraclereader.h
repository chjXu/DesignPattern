#pragma once

// 支持Oracle server

#include "datareader.h"

class OracleDatareader : public IDBDatareader
{
private:
    /* data */
public:
    OracleDatareader(/* args */);
    ~OracleDatareader();

    void doDatareader();
};