#pragma once 
#include "BaseHandle.h"

class FirstHandle : public BaseHandle {
public:
    void handle(Request& req) {
        if(req.money < 1000){
            std::cout << "first handle success" << std::endl;
        }else{
            std::cout << "first handle failed, to second handle" << std::endl;
            if(_next_handle){
                _next_handle->handle(req);
            }
        }
    }
};