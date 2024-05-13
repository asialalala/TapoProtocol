cmake_minimum_required(VERSION 3.0.0)
project(TapoConnect LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
# set(ASIO_DIR /usr/local/opt/asio)

add_subdirectory(Cli)
add_subdirectory(Device)
add_subdirectory(Discover)

add_executable(TapoConnect main.cpp)

target_link_libraries(TapoConnect 
    PRIVATE 
    Cli
    Device
    Discover
    ${ASIO_DIR}
)