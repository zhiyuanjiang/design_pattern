#pragma once
#include <iostream>

class LawSuit {
public:
    virtual void submit(std::string& proof) = 0;
};