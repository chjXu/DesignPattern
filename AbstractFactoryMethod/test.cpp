// 客户端

#include "AbstractFactory.hpp"



int main()
{
    AbstractFactory* dbFactory = new SQLFactory();
    IDBConnection* connection = dbFactory->createConnection();
    connection->doConnection();

    IDBCommand* command = dbFactory->createCommand();
    command->doCommand();
    command->setConnection(*connection); // 关联性

    IDBDatareader* datareader = dbFactory->createDatareder();
    datareader->doDatareader();

    delete datareader;
    delete command;
    delete connection;
    delete dbFactory;
    return 0;
}