#include<iostream>
using namespace std;
// using namespace First;

namespace First{
    int x = 10;
    void display(){
        cout<<"\nI am in display in namespace First";
    }
}

// void display()
// {
//     cout<<"\nI am in display method";
// }

int main()
{
    int x = 1000;
    cout<<"\n"<<x<<endl;
    cout<<First::x<<endl;
    First::display();
}

