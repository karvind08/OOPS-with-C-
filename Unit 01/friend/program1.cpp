#include<iostream>
using namespace std;
class Example
{
    int a,b;
    public:
        void getdata(int,int);
        void display();
        friend void mean(Example);
};
void Example::getdata(int x,int y)
{
    a = x;
    b = y;
}
void Example::display()
{
    cout<<a<<endl;
    cout<<b<<endl;
}
void mean(Example E)
{
    double m = (E.a+E.b)/2.0;
    cout<<"\nThe mean is :"<<m<<endl;
}
int main()
{
    Example E1;
    E1.getdata(10,20);
    E1.display();
    mean(E1);
}