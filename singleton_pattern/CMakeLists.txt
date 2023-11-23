include_directories("./")

FILE(GLOB cpp_file "./*.cpp")

add_executable(singleton_pattern ${cpp_file})