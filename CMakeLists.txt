cmake_minimum_required(VERSION 3.6)
project(KCRepair2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Dock.h Ship.h Dock.cpp Ship.cpp KC3Parser.cpp KC3Parser.h DockManager.cpp DockManager.h)
add_executable(KCRepair2 ${SOURCE_FILES})