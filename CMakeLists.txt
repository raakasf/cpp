cmake_minimum_required(VERSION 3.20)

# Set the project name and version
project(MyCoroutineProject VERSION 1.0 LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(MyCoroutineProject cpp20/coroutine/main.cpp cpp20/coroutine/mycoroutine.cpp)

# Include the directory for header files
target_include_directories(MyCoroutineProject PUBLIC ${PROJECT_SOURCE_DIR}/include)
