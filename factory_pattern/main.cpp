#include "factorya.h"
#include "factoryb.h"

int main() {
    FactoryA* fa = new FactoryA();
    FactoryB* fb = new FactoryB();
    fa->CreateProduct()->do_something();
    fb->CreateProduct()->do_something();
    return 0;
}