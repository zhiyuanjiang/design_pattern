#pragma once
#include <iostream>

#include "coffee_produce.h"

class Coffee : public CoffeeProduce {
public:
    void coffee_produce() {
        std::cout << "原味咖啡: " << std::endl;
    }
};