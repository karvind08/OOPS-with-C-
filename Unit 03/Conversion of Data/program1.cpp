#include <iostream>
using namespace std;
class Example {
    int a;
public:
    Example(int);
    void display();    
};
Example::Example(int x)
{
    a = x;
}
void Example::display(){
     {
        cout << "a = " << a << endl;
    }
}

int main() {
    Example E = 50;   // int converted to object
    E.display();
    return 0;
}