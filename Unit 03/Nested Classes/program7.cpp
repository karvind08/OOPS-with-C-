#include <iostream>
using namespace std;

class Outer
{
private:
    int x;

public:
    Outer()
    {
        x = 50;
    }

    class Inner
    {
    public:
        void display(Outer obj)
        {
            cout << obj.x << endl;
        }
    };
};

int main()
{
    Outer o;
    Outer::Inner i;
    i.display(o);

    return 0;
}