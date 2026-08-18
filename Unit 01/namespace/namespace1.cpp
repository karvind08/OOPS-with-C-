#include<iostream>
using namespace std;

namespace First{
    int x = 10;
    void display(){
        cout<<"\nI am in display in namespace First";
    }
}

namespace Second{
    int x = 100;
    void display(){
        cout<<"\nI am in display in namespace Second";
    }
}
void display()
{
    cout<<"\nI am in display method";
}

int main()
{
    int x = 1000;
    display();
    cout<<"\n"<<x<<endl;
    cout<<First::x<<endl;
    First::display();
    cout<<"\n"<<Second::x;
    Second::display();
}

