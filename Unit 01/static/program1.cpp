#include<iostream>
using namespace std;
class Example
{
    public:
        static int n;
};
int Example::n=10;
int main()
{
    Example E;
    cout<<E.n;
    cout<< Example::n;
}