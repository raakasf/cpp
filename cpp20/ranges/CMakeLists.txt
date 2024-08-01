# ranges/CMakeLists.txt

# Add the executable for the ranges example
add_executable(ranges ranges.cpp)

# Include directories if there are any headers specific to this executable
include_directories(${PROJECT_SOURCE_DIR}/ranges)
