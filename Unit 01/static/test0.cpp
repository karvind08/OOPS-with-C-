#include<iostream>
using namespace std;
class Test
{
    static int n;
    public:

};

int Test::n=10;

int main()
{
    // cout<<Test::n; // Error 
}
