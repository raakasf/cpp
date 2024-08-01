# coroutine/CMakeLists.txt

# Include the directory for header files
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the executable for the coroutine example
add_executable(coroutine main.cpp coroutine.cpp)
