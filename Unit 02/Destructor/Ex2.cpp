#include<iostream>
using namespace std;
class Example
{   
    int a,b;
    public:
        Example(int,int);
        void display();
        ~Example();
};
Example::Example(int x,int y)
{
    a = x;
    b = y;
}
void Example::display()
{
    cout<<a<<b<<endl;
}
Example::~Example()
{
    cout<<"Object deleted"<<endl;
}
int main()
{
    Example E1(100,120);
    E1.display();
}