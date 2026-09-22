#include<iostream>
using namespace std;
class Example
{
    static int count;
    public:
        Example()
        {
            count++;
            cout<<"\n The number of Objects created: "<<count;
        }
        ~Example()
        {
           cout<<"\n The number of Objects deleted: "<<count;
           count--;
        }

};
int Example::count;

int main()
{
    Example E1,E2,E3;
}