#include<iostream>
using namespace std;
class Example
{
    public:
        Example();
        ~Example();
};

Example::Example(){
    cout<<"Constructor called";
}
Example::~Example(){
    cout<<"\nDestructor Called";
}

int main()
{
    Example E1;
}