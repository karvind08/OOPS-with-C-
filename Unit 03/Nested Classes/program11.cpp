#include <iostream>
using namespace std;

class Outer
{
private:
    class Inner
    {
    public:
        void display();   // Declaration
    };

public:
    void show();          // Declaration
};

// Definition of nested class function
void Outer::Inner::display()
{
    cout << "Private Nested Class" << endl;
}

// Definition of outer class function
void Outer::show()
{
    Inner obj;
    obj.display();
}

int main()
{
    Outer o;
    o.show();

    return 0;
}