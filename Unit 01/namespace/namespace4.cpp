#include <iostream>
using namespace std;
namespace English {
    void greet() {
        cout << "Hello\n";
    }
}

using namespace English;

int main() {
    greet();   // No need for English::
}