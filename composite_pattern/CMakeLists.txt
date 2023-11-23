include_directories("./")

FILE(GLOB cpp_file "./*.cpp")

add_executable(composite_pattern ${cpp_file})