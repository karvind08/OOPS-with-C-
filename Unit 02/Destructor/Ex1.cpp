#include<iostream>
using namespace std;
class Example
{
    public:
        Example()
        {
            cout<<"Constructor called";
        }
        ~Example()
        {
            cout<<"\nDestructor Called";
        }

};

int main()
{
    Example E1;
}