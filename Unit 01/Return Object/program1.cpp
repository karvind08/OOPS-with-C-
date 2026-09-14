#include<iostream>
using namespace std;
class Example
{
        int a;
    public:
        void geta(int);
        Example sum(Example,Example);
        void Display(Example);
};
void Example::geta(int x)
{
    a = x;
}
Example Example::sum(Example E1,Example E2)
{
    Example S;
    S.a = E1.a+E2.a;
    return S;
}
void Example::Display(Example S)
{
    cout<<S.a<<endl;
}
int main()
{
    Example E1,E2,E3;
    E1.geta(10);
    E2.geta(100);
    E3 = E1.sum(E1,E2);
    E3.Display(E3);
}