#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l)
    {
        length = l;
        breadth = 10; // default value
    }
    void setBreadth(int b = 10)
    {
        breadth = b;
    }
    int area();
};

int Rectangle::area()
{
    return length * breadth;
}

int main()
{
    Rectangle r(20);
    r.setBreadth();
    cout << "Area of Rectangle = " << r.area() << endl;
    return 0;
}