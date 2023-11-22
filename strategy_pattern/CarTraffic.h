#pragma once
#include "BaseTraffic.h"

class CarTraffic : public BaseTraffic {
public:
    CarTraffic() = default;
    void calc_money(const int dis) {
        std::cout << "calc car money" << std::endl;
    }
};