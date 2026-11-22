#include <iostream>
using namespace std;
class Outer{
private:
    class Inner{
    public:
        void display(){
            cout << "Private Nested Class" << endl;
        }
    };
public:
    void show(){
        Inner obj;
        obj.display();
    }
};

int main()
{
    Outer o;
    o.show();
    return 0;
}
