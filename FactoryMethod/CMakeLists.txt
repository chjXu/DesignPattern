cmake_minimum_required(VERSION 3.4.1)

project(Factory)

set( CMAKE_BUILD_TYPE "Debug" )

include_directories(
    include
)

add_library(${PROJECT_NAME}
    src/iSplitter.cc
    src/splitterFactory.cc
    src/binarySplitter.cc
    src/binarySplitterFactory.cc
    src/pictureSplitter.cc
    src/pictureSplitterFactory.cc
    src/txtSplitter.cc
    src/txtSplitterFactory.cc
    src/videoSplitter.cc
    src/videoSplitterFactory.cc
)

target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
)

add_executable(${PROJECT_NAME}_node src/main.cpp)

target_link_libraries(${PROJECT_NAME}_node
  ${PROJECT_NAME}
)