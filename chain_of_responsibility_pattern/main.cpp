#include <iostream>

#include "FirstHandle.h"
#include "SecondHandle.h"

int main() {
    BaseHandle* first = new FirstHandle();
    BaseHandle* second = new SecondHandle();
    first->set_next(second);

    Request req(1500);
    first->handle(req);
    return 0;
}