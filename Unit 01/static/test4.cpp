#include<iostream>
using namespace std;
class Test
{       int a;
        static int n;
    public:
        void getdata(int);
        void display();
        static void show();

};
int Test::n=10;
void Test::show()
{
    cout<<n<<endl;
    // cout<<a<<endl;
}
void Test::getdata(int x)
{
    a = x;
}
void Test::display()
{
    cout<<a<<endl;
    cout<<n<<endl;
}
int main()
{
    Test T1;
    T1.getdata(100);
    T1.display();
    Test::show();
}
