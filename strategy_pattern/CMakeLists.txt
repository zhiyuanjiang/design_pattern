include_directories("./")

FILE(GLOB cpp_file "./*.cpp")

add_executable(strategy_pattern ${cpp_file})