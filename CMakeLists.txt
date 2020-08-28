cmake_minimum_required(VERSION 3.14)
project(lab04-solid)

set(CMAKE_CXX_STANDARD 17)
add_executable(game Game.h Game.cpp MainGame.cpp DigitalGames.h PhysicalGames.h StreamingGames.h DigitalGames.cpp PhysicalGames.cpp StreamingGames.cpp GameManager.h GameManager.cpp)