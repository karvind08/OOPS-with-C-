#include <iostream>
using namespace std;

class Example {
    int a;
public:
    Example(int);
    operator int();  
};
Example::Example(int x) {
    a = x;
}
Example::operator int() {
    a = a+10;
    return a;
}
int main() {
    Example E(10);
    int r;
    r = E;      
    cout << "r = " << r << endl;
    return 0;
}