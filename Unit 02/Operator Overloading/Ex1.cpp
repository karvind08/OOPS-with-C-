#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    void getdata(int,int);
    void display();
    Example sum(Example,Example);
};
void Example::getdata(int x,int y){
    a = x;
    b = y;
}
void Example::display(){
    cout<<a<<" "<<b<<endl;
}
Example Example::sum(Example E1,Example E2)
{
    Example S;
    S.a = E1.a+E2.a;
    S.b = E1.b+E2.b;
    return S;
}

int main()
{
    Example A;
    A.getdata(10,20);
    A.display();
    Example B;
    B.getdata(10,20);
    B.display();
    Example C;
    Example D = C.sum(A,B);
    D.display();
}