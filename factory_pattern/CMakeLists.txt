include_directories("./")

FILE(GLOB cpp_file "./*.cpp")

add_executable(factory_pattern ${cpp_file})