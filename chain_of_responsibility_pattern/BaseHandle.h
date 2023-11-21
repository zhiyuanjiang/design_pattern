#pragma once
#include <iostream>

struct Request {
Request(int m) : money(m) {}
int money = 0;
};

class BaseHandle {
public:
    BaseHandle() = default;
    ~BaseHandle() = default;

    virtual void handle(Request& req);
    void set_next(BaseHandle* handle);

public:
    BaseHandle* _next_handle = nullptr;
};