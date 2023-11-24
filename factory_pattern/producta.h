#pragma once
#include <iostream>

#include "product.h"

class ProductA : public Product {
public:
    void do_something() {
        std::cout << "do something product a" << std::endl;
    }
};