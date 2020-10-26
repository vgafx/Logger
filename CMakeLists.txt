cmake_minimum_required(VERSION 3.5)

project(Logger LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-O3")

set(SOURCES
    main.cpp
    logger.cpp)

set(HEADERS
    logger.h)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
