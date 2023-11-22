#include <iostream>

#include "coffee.h"
#include "milk_decorator.h"
#include "sugar_decorator.h"

int main() {
    std::shared_ptr<CoffeeProduce> coffee = std::make_shared<Coffee>();
    std::shared_ptr<CoffeeProduce> milk_coffee = std::make_shared<MilkDecorator>(coffee);
    std::shared_ptr<CoffeeProduce> sugar_milk_coffee = std::make_shared<SugarDecorator>(milk_coffee);
    sugar_milk_coffee->coffee_produce();
    return 0;
}