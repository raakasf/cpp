# coroutine/CMakeLists.txt

# Include the directory for header files
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(main_2_1 main_2_1.cpp)
target_compile_options(main_2_1 PRIVATE -Wall)

add_executable(main_2_2 main_2_2.cpp)
target_compile_options(main_2_2 PRIVATE -Wall)

add_executable(main_2_4 main_2_4.cpp)
target_compile_options(main_2_4 PRIVATE -Wall)

add_executable(main_2_5 main_2_5.cpp)
target_compile_options(main_2_5 PRIVATE -Wall)
