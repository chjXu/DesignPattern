#include "sqlcommand.h"

SQLCommand::SQLCommand(){

}

SQLCommand::~SQLCommand(){

}

void SQLCommand::doCommand(){
    std::cout << "SQL Commanding..." << std::endl;
}

void SQLCommand::setConnection(IDBConnection &connection){
    connection.doConnection();
}