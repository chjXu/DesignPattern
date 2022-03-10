cmake_minimum_required(VERSION 3.4.1)

project(AbstractFactory)

set( CMAKE_BUILD_TYPE "Debug" )

include_directories(
    include
)

add_library(${PROJECT_NAME}
    src/abstractFactory.cc
    src/command.cc
    src/connection.cc
    src/datareader.cc
    src/oraclecommand.cc
    src/oracleconnection.cc
    src/oracledatareader.cc
    src/oraclefactory.cc
    src/sqlcommand.cc
    src/sqlconnection.cc
    src/sqldatareader.cc
    src/sqlfactory.cc
)

target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
)

add_executable(${PROJECT_NAME}_node src/main.cpp)

target_link_libraries(${PROJECT_NAME}_node
  ${PROJECT_NAME}
)