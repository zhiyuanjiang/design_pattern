#pragma once
#include <iostream>

class BaseTraffic {
public:
    virtual void calc_money(const int dis) = 0;
};