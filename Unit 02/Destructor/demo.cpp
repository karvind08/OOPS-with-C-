#include "demo.h"
#include <iostream>

Demo::Demo() {
    std::cout << "Constructor called\n";
}

Demo::~Demo() {
    std::cout << "Destructor called\n";
}

int main()
{
    Demo D;
}