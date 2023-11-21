#pragma once
#include <iostream>
#include <string>

class MediaPublisher;

class StuSubscriber {
public:
    virtual void update(const std::string& news) = 0;
    virtual void subscriber(MediaPublisher* pub);
};