#include<iostream>
using namespace std;
class Example
{
        static int count;
        int a;
    public:
        void getdata(int);
        void display();
};
void Example::getdata(int x)
{
    a = x;
    count++;
}
void Example:: display()
{
    // cout<<"The a:"<<a<<endl;
    cout<<"\nThe count is: "<<count<<endl;
}
int Example::count;
int main()
{
    Example E1,E2;
    E1.getdata(5);
    E2.getdata(8);
    E1.display();
    E2.display();
}