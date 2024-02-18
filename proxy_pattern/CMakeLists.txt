include_directories("./")

FILE(GLOB cpp_file "./*.cpp")

add_executable(proxy_pattern ${cpp_file})