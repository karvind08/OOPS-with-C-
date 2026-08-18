#include <iostream>
using namespace std;

class Test;

class Example
{
    int a;

public:
    void geta(int x)
    {
        a = x;
    }

    void sum(Example, Test);
};

class Test
{
    int b;

public:
    void getb(int y)
    {
        b = y;
    }

    int getValue()
    {
        return b;
    }
};

void Example::sum(Example E1, Test T1)
{
    int r = E1.a + T1.getValue();
    cout << "The sum is: " << r;
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
