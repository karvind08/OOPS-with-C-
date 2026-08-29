#include<iostream>
using namespace std;
class Example
{
    public:
        static int n;
};
int Example::n;
int main()
{
    Example E;
    cout<<E.n;
    cout<<"\n"<<Example::n;
}