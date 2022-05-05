cmake_minimum_required(VERSION 3.16.3 FATAL_ERROR)

project(engine)
set(CMAKE_CXX_STANDARD 11)
set(SFML_DIR "/usr/lib/cmake/SFML/")

find_package(SFML 2.5 
  COMPONENTS 
      system window graphics network audio REQUIRED
        )


include_directories([AFTER|BEFORE] [SYSTEM] include)
include_directories(${SFML_INCLUDE_DIR})

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
    ${CMAKE_CURRENT_LIST_DIR}/src/window.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/Game.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/main.cpp
)

#add_executable(program ${TESTING_SOURCE})

add_executable(game ${GAME_SOURCE})

target_link_libraries(
    engine
    SMFLTest sfml-graphics
)

