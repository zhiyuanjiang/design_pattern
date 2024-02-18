include_directories("./")

FILE(GLOB cpp_file "./*.cpp")

add_executable(command_pattern ${cpp_file})