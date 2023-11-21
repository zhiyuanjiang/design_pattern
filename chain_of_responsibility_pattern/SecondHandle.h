#pragma once
#include "BaseHandle.h"

class SecondHandle : public BaseHandle {
public:
    void handle(Request& req) {
        if(req.money < 2000){
            std::cout << "second handle success" << std::endl;
        }else{
            std::cout << "second handle failed" << std::endl;
        }
    }
};