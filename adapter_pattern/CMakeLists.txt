include_directories("./")

FILE(GLOB cpp_file "./*.cpp")

add_executable(adapter_pattern ${cpp_file})