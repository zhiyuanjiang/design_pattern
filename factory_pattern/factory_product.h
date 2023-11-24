#pragma once 
#include <memory>

#include "product.h"

class FactoryProduct {
public:
    virtual std::shared_ptr<Product> CreateProduct() = 0;
};