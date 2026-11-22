#include <iostream>
using namespace std;

class Outer
{
public:
    class Inner
    {
    public:
        void show();     
 };
};
void Outer::Inner::show()
{
    cout << "Defined outside the Class" << endl;
}

int main()
{
    Outer::Inner obj;
    obj.show();

    return 0;
}