cmake_minimum_required(VERSION 3.5)

project(Adventure LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Adventure main.cpp
    Player.h Player.cpp
    Field.h Field.cpp)

include(GNUInstallDirs)
install(TARGETS Adventure
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
