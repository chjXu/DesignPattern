cmake_minimum_required(VERSION 3.4.1)

project(template)

set( CMAKE_BUILD_TYPE "Debug" )

include_directories(
    include
)

add_library(${PROJECT_NAME}
    src/abstractClass.cpp
    src/concreteClassA.cpp
    src/concreteClassB.cpp
)

target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
)

add_executable(${PROJECT_NAME}_node src/main.cpp)

target_link_libraries(${PROJECT_NAME}_node
  ${PROJECT_NAME}
)