#pragma once
#include <iostream>
#include <vector>
#include <memory>

#include "graphic.h"

class CompositeGraphic : public Graphic {
public:
    void draw() {
        std::cout << "draw composite graphic background" << std::endl;
        for(auto child : _childs){
            child->draw();
        }
    }

    void add(std::shared_ptr<Graphic> child) {
        _childs.push_back(child);
    };

private:
    std::vector<std::shared_ptr<Graphic>> _childs;
};