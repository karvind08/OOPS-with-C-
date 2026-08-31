#include<iostream>
using namespace std;
class Test
{
        static int n;
    public:
        void display();

};

int Test::n=10;
void Test::display()
{
    cout<<n;
}

int main()
{
    Test T1;
    T1.display();
}
