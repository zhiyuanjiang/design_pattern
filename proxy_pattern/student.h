#pragma once
#include "law_suit.h"

class Student : public LawSuit {
public:
    void submit(std::string& proof) {
        std::cout << "这是相关证据：" << proof << std::endl;
    }
};