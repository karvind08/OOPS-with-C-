#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    void getdata(int);
    void display();
    Example operator++();
};
void Example::getdata(int x){
    a = x;
}
void Example::display(){
    cout<<a<<endl;
}
Example Example::operator++()
{
    Example S;
    S.a = ++a;
    return S;
}
int main()
{
    Example A,B;
    A.getdata(5);
    A.display();
    B = ++A;
    B.display();
    A.display();    
}