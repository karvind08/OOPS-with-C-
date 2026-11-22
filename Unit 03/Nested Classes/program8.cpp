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

    int getX() const
    {
        return x;
    }

    class Inner
    {
    public:
        void display(Outer obj)
        {
            cout << "x = " << obj.getX() << endl;
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