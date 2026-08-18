#include<iostream>
using namespace std;
namespace verylongnamespace{
    int x = 10;
}

namespace vln = verylongnamespace;

int main()
{
    double x = 12.34;
    cout<<x<<endl;
    cout<<vln::x;
}