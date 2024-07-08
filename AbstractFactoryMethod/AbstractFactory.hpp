#pragma once

#include <iostream>

// 抽象工厂
/**
 * 对于一种数据格式，其conenct，command, reader是具有“强内聚”特点的
 * 抽象工厂就是解决普通工厂之间的关系型问题的
*/


// 数据库访问的相关基类
class IDBConnection
{
private:
    /* data */
public:
    IDBConnection()
    {
        std::cout << "IDBConnection Constructor..." << std::endl;
    }

    virtual ~IDBConnection()
    {
        std::cout << "IDBConnection Deconstructor..." << std::endl;
    }

    virtual void doConnection()
    {
        std::cout << "IDBConnection doConnection..." << std::endl;
    }
};


// 数据库访问的相关基类
class IDBCommand
{
private:
    /* data */
public:
    IDBCommand()
    {
        std::cout << "IDBCommand Constructor..." << std::endl;
    }

    virtual ~IDBCommand()
    {
        std::cout << "IDBCommand Deconstructor..." << std::endl;
    }

    virtual void doCommand()
    {
        std::cout << "IDBCommand doCommand..." << std::endl;
    }

    virtual void setConnection(IDBConnection& connect)
    {
        connect.doConnection();
    }
};


// 数据库访问的相关基
class IDBDatareader
{
private:
    /* data */
public:
    IDBDatareader()
    {
        std::cout << "IDBDatareader Constructor..." << std::endl;
    }

    virtual ~IDBDatareader()
    {
        std::cout << "IDBDatareader Deconstructor..." << std::endl;
    }

    virtual void doDatareader()
    {
        std::cout << "IDBDatareader doDatareader..." << std::endl;
    }
};


// 支持Oracle server
class OracleCommand : public IDBCommand
{
private:
    /* data */
public:
    OracleCommand(/* args */)
    {
        std::cout << "OracleCommand Constructor..." << std::endl;
    }

    ~OracleCommand()
    {
        std::cout << "OracleCommand Deconstructor..." << std::endl;
    }

    void doCommand()
    {
        std::cout << "OracleCommand doCommand..." << std::endl;
    }

    void setConnection(IDBConnection &connection)
    {
        connection.doConnection();
    }
};


class OracleConnection : public IDBConnection
{
private:
    /* data */
public:
    OracleConnection(/* args */)
    {
        std::cout << "OracleConnection Constructor..." << std::endl;
    }
    ~OracleConnection()
    {
        std::cout << "OracleConnection Deconstructor..." << std::endl;
    }

    void doConnection()
    {
        std::cout << "OracleConnection doConnection..." << std::endl;
    }
};


class OracleDatareader : public IDBDatareader
{
private:
    /* data */
public:
    OracleDatareader(/* args */)
    {
        std::cout << "OracleDatareader Constructor..." << std::endl;
    }

    ~OracleDatareader()
    {
        std::cout << "OracleDatareader Deconstructor..." << std::endl;
    }

    void doDatareader()
    {
        std::cout << "OracleDatareader doDatareader..." << std::endl;
    }
};


////////////////////////////////////////////////////////////////////////////////////////
class SQLCommand : public IDBCommand
{
private:
    /* data */
public:
    SQLCommand(/* args */)
    {
        std::cout << "SQLCommand Constructor..." << std::endl;
    }

    ~SQLCommand()
    {
        std::cout << "SQLCommand Deconstructor..." << std::endl;
    }

    void doCommand()
    {
        std::cout << "SQLCommand doCommand..." << std::endl;
    }

    void setConnection(IDBConnection &connection)
    {
        connection.doConnection();
    }
};


class SQLConnection : public IDBConnection
{
private:
    /* data */
public:
    SQLConnection(/* args */)
    {
        std::cout << "SQLConnection Constructor..." << std::endl;
    }

    ~SQLConnection()
    {
        std::cout << "SQLConnection Deconstructor..." << std::endl;
    }

    void doConnection()
    {
        std::cout << "SQLConnection doConnection..." << std::endl;
    }
};


class SQLDatareader : public IDBDatareader
{
private:
    /* data */
public:
    SQLDatareader(/* args */)
    {
        std::cout << "SQLDatareader Constructor..." << std::endl;
    }

    ~SQLDatareader()
    {
        std::cout << "SQLDatareader Deconstructor..." << std::endl;
    }

    void doDatareader()
    {
        std::cout << "SQLDatareader doDatareader..." << std::endl;
    }
};


/////////////////////////////////////////////////////////////////////////////////////////
class AbstractFactory{
public:
    AbstractFactory()
    {
        std::cout << "AbstractFactory Constructor..." << std::endl;
    }

    ~AbstractFactory()
    {
        std::cout << "AbstractFactory Deconstructor..." << std::endl;
    }

    virtual IDBConnection* createConnection() = 0;
    virtual IDBCommand* createCommand() = 0;
    virtual IDBDatareader* createDatareder() = 0;

private:
};


class OracleFactory : public AbstractFactory{
public:
    OracleFactory()
    {
        std::cout << "OracleFactory Constructor..." << std::endl;
    }

    ~OracleFactory()
    {
        std::cout << "OracleFactory Deconstructor..." << std::endl;
    }

    virtual IDBConnection* createConnection()
    {
        std::cout << "OracleFactory createConnection..." << std::endl;
        return new IDBConnection();
    }

    virtual IDBCommand* createCommand()
    {
        std::cout << "OracleFactory createCommand..." << std::endl;
        return new IDBCommand();
    }

    virtual IDBDatareader* createDatareder()
    {
        std::cout << "OracleFactory createDatareder..." << std::endl;
        return new IDBDatareader();
    }
private:
};


class SQLFactory : public AbstractFactory{
public:
    SQLFactory()
    {
        std::cout << "SQLFactory Constructor..." << std::endl;
    }

    ~SQLFactory()
    {
        std::cout << "SQLFactory Deconstructor..." << std::endl;
    }

    IDBConnection* createConnection()
    {
        std::cout << "SQLFactory createConnection..." << std::endl;
        return new IDBConnection();
    }

    IDBCommand* createCommand()
    {
        std::cout << "SQLFactory createCommand..." << std::endl;
        return new IDBCommand();
    }

    IDBDatareader* createDatareder()
    {
        std::cout << "SQLFactory createDatareder..." << std::endl;
        return new IDBDatareader();
    }
private:
};