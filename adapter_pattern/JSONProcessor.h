#pragma once 
#include <iostream>

class JSONProcessor {
public:
    void json_process(const std::string& json) {
        std::cout << "process json data: " << json << std::endl;
    }
};