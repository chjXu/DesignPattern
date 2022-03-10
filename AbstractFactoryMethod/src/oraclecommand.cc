#include "oraclecommand.h"

OracleCommand::OracleCommand(){

}

OracleCommand::~OracleCommand(){

}

void OracleCommand::doCommand(){
    std::cout << "Oracle Commanding..." << std::endl;
}

void OracleCommand::setConnection(IDBConnection &connection){
    connection.doConnection();
}