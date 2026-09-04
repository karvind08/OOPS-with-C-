#include<iostream>
using namespace std;
class ExampleB;
class ExampleA
{
    int a;
    public:
        void geta(int);
        void display();
        friend void sum(ExampleA,ExampleB);
};
void ExampleA::geta(int x)
{
    a = x;
}
void ExampleA::display()
{
    cout<<"\nThe a is: "<<a<<endl;
}
class ExampleB
{
    int b;
    public:
        void getb(int);
        void display();
        friend void sum(ExampleA,ExampleB);
};
void ExampleB::getb(int y)
{
    b = y;
}
void ExampleB::display()
{
    cout<<"\nThe b is: "<<b<<endl;
}
void sum(ExampleA A,ExampleB B)
{
    int s = A.a + B.b;
    cout<<"The sum is :"<<s<<endl;
}
int main()
{
    ExampleA E1;
    E1.geta(10);
    E1.display();
    ExampleB E2;
    E2.getb(30);
    E2.display();
    sum(E1,E2);
}