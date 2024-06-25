#include "class.h"

void A::for_support () {
}

A::A () {
    std::cout << "construct A" << std::endl;
}

A* A::instance = nullptr;
