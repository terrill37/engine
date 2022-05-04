cmake_minimum_required(VERSION 3.16.3 FATAL_ERROR)

project(engine)
set(CMAKE_CXX_STANDARD 11)

include_directories([AFTER|BEFORE] [SYSTEM] include)

set(ENGINE_SOURCE
    ${CMAKE_CURRENT_LIST_DIR}/src/particle.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/engine.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/pfgen.cpp
)

add_library(engine STATIC ${ENGINE_SOURCE})

set(TESTING_SOURCE
    ${CMAKE_CURRENT_LIST_DIR}/src/testing.cpp
)

set(GAME_SOURCE
    ${CMAKE_CURRENT_LIST_DIR}/src/Game.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/main.cpp
)

add_executable(program ${TESTING_SOURCE})

add_executable(game ${GAME_SOURCE})

target_link_libraries(program
    engine
)

