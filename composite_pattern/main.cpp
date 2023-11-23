#include <iostream>

#include "composite_graphic.h"
#include "dot.h"
#include "circle.h"

int main() {
    std::shared_ptr<CompositeGraphic> graphics = std::make_shared<CompositeGraphic>();
    std::shared_ptr<CompositeGraphic> child_graphics = std::make_shared<CompositeGraphic>();
    std::shared_ptr<Dot> dot1 = std::make_shared<Dot>();
    std::shared_ptr<Dot> dot2 = std::make_shared<Dot>();
    std::shared_ptr<Circle> circle = std::make_shared<Circle>();
    child_graphics->add(dot1);
    child_graphics->add(circle);
    graphics->add(child_graphics);
    graphics->add(dot2);
    graphics->draw();
    return 0;
}