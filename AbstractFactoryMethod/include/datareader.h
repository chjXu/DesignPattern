#pragma once

// 数据库访问的相关基类

class IDBDatareader
{
private:
    /* data */
public:
    IDBDatareader();
    virtual ~IDBDatareader();

    virtual void doDatareader() = 0;
};
