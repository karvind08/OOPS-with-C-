#include <iostream>
using namespace std;
class Outer
{
public:
    class Inner
    {
    public:
        void show()
        {
            cout << "Inside Nested Class" << endl;
        }
    };
};
int main()
{
    Outer::Inner obj;
    obj.show();
    return 0;
}
