#include <iostream>
using namespace std;
class Example{
    int a;
public:
    Example(int);
    operator int() {   // Conversion function
        return a;
    }
};
Example::Example(int x)
{
    a = x;
}
int main() {
    Example E(10);
    int r;
    r = E;      // Object converted to int
    cout << "r = " << r << endl;
    return 0;
}