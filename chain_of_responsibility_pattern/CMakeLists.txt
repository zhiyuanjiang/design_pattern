include_directories("./")

FILE(GLOB cpp_file "./*.cpp")

add_executable(chain_of_responsibility ${cpp_file})