#include <iostream>
using namespace std;
class Example {
    int a;
public:
    Example(int);          
    operator int();        
    void display();        
};
Example::Example(int x) {
    a = x;
}
Example::operator int() {
    return a;
}
void Example::display() {
    cout << "Value = " << a << endl;
}
int main() {
    Example E = 100;    // Basic → Object
    E.display();
    int x = E;          // Object → Basic
    cout << "x = " << x << endl;
    return 0;
}