#include<iostream>
using namespace std;
class Example
{
    static int n;
    public:
    static void display()
    {
        cout<<n;
    }
        
};
int Example::n=10;
int main()
{
    Example::display();
}