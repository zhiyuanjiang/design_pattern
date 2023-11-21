include_directories("./")

FILE(GLOB cpp_file "./*.cpp")

add_executable(oberver_pattern ${cpp_file})