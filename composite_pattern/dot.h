#pragma once
#include <iostream>
#include "graphic.h"

class Dot : public Graphic {
public:
    void draw() {
        std::cout << "draw dot" << std::endl;
    }
};