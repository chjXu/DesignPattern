// 客户端

#include "abstractFactory.h"
#include "connection.h"
#include "command.h"
#include "datareader.h"
#include "sqlconnection.h"
#include "sqlcommand.h"
#include "sqlreader.h"
#include "oraclecommand.h"
#include "oracleconnection.h"
#include "oraclereader.h"



int main(){
    // 1
    // SQl
    // IDBConnection * connection = new SQLConnection();
    // connection->doConnection();

    // IDBCommand* command = new SQLCommand();
    // command->doCommand();

    // IDBDatareader* datareader = new SQLDatareader();
    // datareader->doDatareader();

    // 2
    // Oracle
    // IDBConnection * connection = new OracleConnection();
    // connection->doConnection();

    // IDBCommand* command = new OracleCommand();
    // command->doCommand();
    // command->setConnection(connection); // 关联性

    // IDBDatareader* datareader = new OracleDatareader();
    // datareader->doDatareader();


    // 3
    AbstractFactory* dbFactory;
    IDBConnection * connection = dbFactory->createConnection();
    connection->doConnection();

    IDBCommand* command = dbFactory->createCommand();
    command->doCommand();
    command->setConnection(connection); // 关联性

    IDBDatareader* datareader = dbFactory->createDatareder();
    datareader->doDatareader();

    while(1){
        // doSomething
    }

    return 0;
}