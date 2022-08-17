cmake_minimum_required(VERSION 3.16.3 FATAL_ERROR)

#set project name and version
project(gameEngine VERSION 1.0)

#set c++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# enable debug symbols by default
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug
        CACHE STRING
            "Choose type of build (Debug or Release)"
            FORCE
        )
endif()

include_directories(gameEngine PRIVATE ${CMAKE_CURRENT_LIST_DIR}/include)

#set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2.5
             COMPONENTS
             system window graphics network audio REQUIRED)

#compile executable
#set(SOURCES
add_executable(gameEngine ${CMAKE_CURRENT_LIST_DIR}/src/main.cpp 
                          ${CMAKE_CURRENT_LIST_DIR}/src/Game.cpp 
                          ${CMAKE_CURRENT_LIST_DIR}/src/window.cpp
						  ${CMAKE_CURRENT_LIST_DIR}/src/gameMap.cpp)
#                           ${CMAKE_CURRENT_LIST_DIR}/src/Game.cpp)

#target_include_directories(gameEngine PRIVATE ${CMAKE_CURRENT_LIST_DIR}/include)

message(STATUS "install prefix: ${CMAKE_INSTALL_PREFIX}")


#set include directory search paths 
target_include_directories(gameEngine
                           PUBLIC
                               "${PROJECT_BINARY_DIR}"
                               "${CMAKE_CURRENT_SOURCE_DIR}/include/")

message(STATUS "current_source_dir: ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "project_binary_dir: ${PROJECT_BINARY_DIR}")
message(gameEngine)

#link executable to required SFML libraries
target_link_libraries(gameEngine PUBLIC sfml-graphics)


get_target_property(OUT gameEngine LINK_LIBRARIES)
message(STATUS ${OUT})

#Install target
install(TARGETS gameEngine DESTINATION bin)


