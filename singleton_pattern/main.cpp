#include <iostream>

#include "singleton.h"

int main() {
    Singleton::get_instance()->print();
    return 0;
}