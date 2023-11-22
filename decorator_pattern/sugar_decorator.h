#pragma once
#include <memory>

#include "coffee_decorator.h"
#include "coffee_produce.h"

class SugarDecorator : public CoffeeDecorator {
public:
    SugarDecorator(std::shared_ptr<CoffeeProduce> coffee) : CoffeeDecorator(coffee) {}

    void coffee_produce() {
        CoffeeDecorator::coffee_produce();
        std::cout << "添加糖" << std::endl;
    }
};