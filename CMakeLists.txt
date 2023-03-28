cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

set(PROJECT_NAME CMakeTest)
project(${PROJECT_NAME} VERSION 0.1 LANGUAGES CXX)

add_executable(${PROJECT_NAME}
	src/main.cpp
	src/main.h
)
