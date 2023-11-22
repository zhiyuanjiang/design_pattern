#pragma once 
#include <memory>

#include "BaseTraffic.h"

class TrafficStrategy {
public:
    void set_traffic_strategy(std::shared_ptr<BaseTraffic> traffic) {
        _traffic = traffic;
    }

    void traffic(const int dis) {
        if(_traffic){
            _traffic->calc_money(dis);
        }
    }

private:
    std::shared_ptr<BaseTraffic> _traffic = nullptr;
};