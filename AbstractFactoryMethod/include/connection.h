#pragma once

// 数据库访问的相关基类

class IDBConnection
{
private:
    /* data */
public:
    IDBConnection();
    virtual ~IDBConnection();

    virtual void doConnection() = 0;
};