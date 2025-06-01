cmake_minimum_required(VERSION 3.20)

# Set the project name and version
project(coroutine VERSION 1.0 LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_subdirectory(cpp20/coroutine)
add_subdirectory(cpp20/ranges)
add_subdirectory(learn_c++_by_example/chapter_2)

# Include the directory for header files
target_include_directories(coroutine PUBLIC ${PROJECT_SOURCE_DIR}/include)
