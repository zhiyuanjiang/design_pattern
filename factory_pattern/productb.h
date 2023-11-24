#pragma once 
#include <iostream>

#include "product.h"

class ProductB : public Product {
public:
    void do_something() {
        std::cout << "do something product b" << std::endl;
    }
};