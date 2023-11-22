#pragma once
#include <memory>

#include "coffee_produce.h"

class CoffeeDecorator : public CoffeeProduce {
public:
    CoffeeDecorator(std::shared_ptr<CoffeeProduce> coffee) {
        _coffee = coffee;
    }

    virtual void coffee_produce() {
        _coffee->coffee_produce();
    }

private:
    std::shared_ptr<CoffeeProduce> _coffee = nullptr;
};