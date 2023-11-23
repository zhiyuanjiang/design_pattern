#pragma once
#include <iostream>
#include "graphic.h"

class Circle : public Graphic {
public:
    void draw() {
        std::cout << "draw circle" << std::endl;
    }
};