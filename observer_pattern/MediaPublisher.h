#pragma once

#include <iostream>
#include <list>

#include "StuSubscriber.h"

class MediaPublisher {
public:
    MediaPublisher() = default;
    ~MediaPublisher();

    void add(StuSubscriber* sub);
    void remove(StuSubscriber* sub);
    void notify(const std::string& news);

private:
    std::list<StuSubscriber*> _sub_list;    
};