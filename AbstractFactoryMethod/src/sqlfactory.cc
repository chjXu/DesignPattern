#include "sqlFactory.h"

SQLFactory::SQLFactory(){

}

SQLFactory::~SQLFactory(){

}

IDBConnection* SQLFactory::createConnection(){
    return new IDBConnection();
}


IDBCommand* SQLFactory::createCommand(){
    return new IDBCommand();
}


IDBDatareader* SQLFactory::createDatareder(){
    return new IDBDatareader();
}