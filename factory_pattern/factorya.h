#pragma once
#include "factory_product.h"
#include "producta.h"

class FactoryA : public FactoryProduct {
public:
    std::shared_ptr<Product> CreateProduct() {
        return std::make_shared<ProductA>();
    }
};