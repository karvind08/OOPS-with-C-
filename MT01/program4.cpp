#include <iostream>
using namespace std;
class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle(int l,int b=10)
    {
        length = l;
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
    Rectangle r(10,20);
    cout << "Area of Rectangle = " << r.area() << endl;
    Rectangle r1(50);
    cout << "Area of Rectangle = " << r1.area() << endl;
    return 0;
}