#pragma once

#include "StuSubscriber.h"

class ZhangSubscriber : public StuSubscriber {
public:
    void update(const std::string& news) {
        if(news == "明天放假"){
            std::cout << "zhang: 明天要好好休息下" << std::endl;
        }
    }
};

