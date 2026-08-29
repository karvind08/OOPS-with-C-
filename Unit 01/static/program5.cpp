#include<iostream>
using namespace std;
class Example
{
    int a;
    static int n;
    public:
    static void display();
    void getdata(int);
    void show();
};
int Example::n=10;
void Example::getdata(int x){
    a = x;
}
void Example::show(){
    cout<<a<<endl;
    cout<<n<<endl;
}
void Example::display()
{
    cout<<n<<endl;
}
int main()
{
    Example E;
    E.getdata(100);
    E.show();
    Example::display();
}