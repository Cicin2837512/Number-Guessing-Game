cmake_minimum_required(VERSION 3.12)
project(Number_Guessing_Game)

set(SOURCE_FILES
	src/Main.cpp
	src/Game.cpp
)

set(HEADER_FILES
	includes/Game.h
)

add_executable(guess-the-number ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(guess-the-number PRIVATE includes)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/bin)
