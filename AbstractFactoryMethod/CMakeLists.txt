project(AbstractoryFactory)

file(GLOB_RECURSE src ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)

add_executable(${PROJECT_NAME}_test ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp ${src})