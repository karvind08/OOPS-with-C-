#include <iostream>
using namespace std;

class Outer
{
public:
    class Inner
    {
    private:
        int x;
    public:
        Inner(){
            x = 100;
        }

        int getX(){
            return x;
        }
    };
    void display()
    {
        Inner obj;
        cout << "x = " << obj.getX() << endl;
    }
};
int main()
{
    Outer o;
    o.display();
    return 0;
}