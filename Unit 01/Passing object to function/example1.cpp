#include<iostream>
using namespace std;
class Example{
    int a;
    public:
        void geta(int);
        void sum(Example, Example);
};

void Example::geta(int x)
{
    a = x;
}
void Example::sum(Example E1,Example E2)
{
    int r = E1.a +E2.a;
    cout<<"\n The sum is: "<<r;
}
int main()
{
    Example EA1, EA2, E;
    int a;
    EA1.geta(10);
    EA2.geta(20);
    E.sum(EA1,EA2);
    return 0;
}