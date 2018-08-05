cmake_minimum_required(VERSION 3.10)
project(testlala)

set(CMAKE_CXX_STANDARD 11)

add_executable(testlala main.cpp)
set(BOOST_ROOT /usr/local/Cellar/boost/1.67.0_1)
find_package(Boost REQUIRED)
if (Boost_FOUND)
    message(STATUS ${Boost_LIBRARIES})
    include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(testlala ${Boost_LIBRARIES})

endif ()