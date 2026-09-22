#include<iostream>
using namespace std;
class Example
{
    public:
        Example();
        ~Example();
};

Example::Example(){
    cout<<"\nConstructor called";
}
Example::~Example(){
    cout<<"\nDestructor Called";
}

int main()
{
    Example E1,E2,E3;
}