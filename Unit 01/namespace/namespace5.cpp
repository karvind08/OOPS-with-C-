#include<iostream>
namespace English {
    void greet() {
        std::cout << "Hello\n";
    }
}

namespace Spanish {
    void greet() {
        std::cout << "Hola\n";
    }
}

using namespace English;
using namespace Spanish;

int main() {
    greet();   // Error: ambiguous
}