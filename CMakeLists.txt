cmake_minimum_required(VERSION 3.10)
project(DesignPattern)

add_definitions(-std=c++11)

add_subdirectory(TemplateMethod)
add_subdirectory(StrategyMethod)
add_subdirectory(ObserverMethod)

add_subdirectory(ResponsibilityChainMethod)