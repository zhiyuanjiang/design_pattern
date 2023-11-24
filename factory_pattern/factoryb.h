#pragma once
#include "factory_product.h"
#include "productb.h"

class FactoryB : public FactoryProduct {
public:
    std::shared_ptr<Product> CreateProduct() {
        return std::make_shared<ProductB>();
    }
};