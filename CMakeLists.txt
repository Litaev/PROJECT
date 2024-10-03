cmake_minimum_required(VERSION 3.25)
project(PROJECT1)

set(CMAKE_CXX_STANDARD 23)

add_executable(PROJECT1 main.cpp Refueling.cpp Refueling.h Event.cpp Event.h carService.cpp carService.h date.cpp date.h Car.cpp Car.h Enums.h User.cpp User.h MyWindows.cpp MyWindows.h Enums.cpp)
