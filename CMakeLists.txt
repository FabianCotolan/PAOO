cmake_minimum_required(VERSION 3.10)


project(FootballTeams)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include_directories(include)


add_executable(FootballTeams 
    src/main.cpp 
    src/FootballTeam.cpp 
    src/FootballPlayer.cpp
)

find_package(Threads REQUIRED)
target_link_libraries(FootballTeams PRIVATE Threads::Threads)


