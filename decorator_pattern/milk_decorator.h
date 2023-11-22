#pragma once
#include <memory>

#include "coffee_decorator.h"
#include "coffee_produce.h"

class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(std::shared_ptr<CoffeeProduce> coffee) : CoffeeDecorator(coffee) {}

    void coffee_produce() {
        CoffeeDecorator::coffee_produce();
        std::cout << "添加牛奶" << std::endl;
    }
};