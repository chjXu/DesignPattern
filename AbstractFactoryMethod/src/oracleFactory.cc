#include "oracleFactory.h"

OracleFactory::OracleFactory(){

}

OracleFactory::~OracleFactory(){

}


IDBConnection* OracleFactory::createConnection(){
    return new IDBConnection();
}


IDBCommand* OracleFactory::createCommand(){
    return new IDBCommand();
}


IDBDatareader* OracleFactory::createDatareder(){
    return new IDBDatareader();
}