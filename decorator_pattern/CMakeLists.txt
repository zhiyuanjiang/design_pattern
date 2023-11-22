include_directories("./")

FILE(GLOB cpp_file "./*.cpp")

add_executable(decorator_pattern ${cpp_file})