cmake_minimum_required(VERSION 3.10)
project(api_gateway)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(api_gateway
    src/main.cpp
    src/gateway.cpp
    src/rate_limiter.cpp
    src/config.cpp
)

target_link_libraries(api_gateway pthread)