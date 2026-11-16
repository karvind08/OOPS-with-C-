#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example(int, int);
    Example(){
    }
    void display();
    Example sum(Example,Example);
};
Example::Example(int x,int y){
    a = x;
    b = y;
}
void Example::display(){
    cout<<a<<" "<<b<<endl;
}
Example Example::sum(Example E1,Example E2)
{
    Example S(0,0);
    S.a = E1.a+E2.a;
    S.b = E1.b+E2.b;
    return S;
}

int main()
{
    Example A(10,20);
    A.display();
    Example B(100,200);
    B.display();
    Example C;
    Example D = C.sum(A,B);
    D.display();
}