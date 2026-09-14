#include<iostream>
using namespace std;
class B;
class A
{
        int a;
    public:
        void geta(int);
        void showa();
        friend class B;
        void displayA(B);
};
class B
{
        int b;
    public:
        void getb(int);
        void showb();
        friend class A;
        void displayB(A);
};
void A::geta(int x)
{
    a = x;
}
void B::getb(int y)
{
    b = y;
}
void A::showa()
{
    cout<<a<<endl;
}
void B::showb()
{
    cout<<b<<endl;
}
void A::displayA(B B1)
{
    cout<<B1.b<<endl;
}
void B::displayB(A A1)
{
    cout<<A1.a<<endl;
}

int main()
{
    A A11;
    A11.geta(10);
    A11.showa();
    B B11;
    B11.getb(20);
    B11.showb();
    A11.displayA(B11);
    B11.displayB(A11);
}