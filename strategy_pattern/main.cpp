#include <iostream>

#include "TrafficStrategy.h"
#include "CarTraffic.h"
#include "BusTraffic.h"

int main() {
    TrafficStrategy traffic;
    std::shared_ptr<BaseTraffic> car_traffic = std::make_shared<CarTraffic>();
    std::shared_ptr<BaseTraffic> bus_traffic = std::make_shared<BusTraffic>();
    int dis = 10;
    traffic.set_traffic_strategy(car_traffic);
    traffic.traffic(dis);
    traffic.set_traffic_strategy(bus_traffic);
    traffic.traffic(dis);
    return 0;
}