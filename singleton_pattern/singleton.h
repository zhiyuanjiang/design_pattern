#pragma once
#include <iostream>

class Singleton {
public:
    static Singleton* get_instance() {
        static Singleton singleton;
        return &singleton;
    }

    void print() {
        std::cout << "hello world" << std::endl;
    }

private:
    Singleton() = default;
    ~Singleton() = default;
    Singleton(const Singleton&) = default;
    Singleton& operator=(const Singleton&) = default;
};