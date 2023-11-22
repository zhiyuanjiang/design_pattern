#pragma once 
#include <iostream>

class XMLProcessor {
public:
    virtual void xml_process(const std::string& xml) {
        std::cout << "process xml data: " << xml << std::endl;
    }
};