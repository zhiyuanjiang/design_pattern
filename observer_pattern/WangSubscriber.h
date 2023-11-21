#pragma once

#include "StuSubscriber.h"

class WangSubscriber : public StuSubscriber {
public:
    void update(const std::string& news) {
        if(news == "明天放假"){
            std::cout << "wang: 放假继续学习" << std::endl;
        }
    }
};