#include <iostream>
using namespace std;
class Outer
{
public:
    class Inner{
    private:
        int x;
    public:
        Inner(){
            x = 100;
        }
    };
    void display()
    {
        Inner obj;
        // cout << obj.x << endl;    // Error: x is private in Inner
    }
};

int main()
{
    Outer o;
    o.display();

    return 0;
}