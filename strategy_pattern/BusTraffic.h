#pragma once 
#include "BaseTraffic.h"

class BusTraffic : public BaseTraffic {
public:
    BusTraffic() = default;
    void calc_money(const int dis) {
        std::cout << "calc bus money" << std::endl;
    }
};