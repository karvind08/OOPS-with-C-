#include<iostream>
using namespace std;

class Test;

class Example
{
    int a;
public:
    void geta(int);
    void sum(Example, Test);
};

void Example::geta(int x)
{
    a = x;
}

class Test
{
    int b;
public:
    void getb(int);

    friend void Example::sum(Example, Test);
};

void Test::getb(int y)
{
    b = y;
}

void Example::sum(Example E1, Test T1)
{
    int r = E1.a + T1.b;
    cout << "\nThe sum is: " << r;
}

int main()
{
    Example E1, E2;
    Test T1;

    E1.geta(10);
    T1.getb(20);

    E2.sum(E1, T1);

    return 0;
}