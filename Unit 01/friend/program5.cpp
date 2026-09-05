#include<iostream>
using namespace std;
class Test;
class Example
{
        int a;
    public:
        friend class Test;

};
class Test
{
    public:
        void display(Example);
};
void Test::display(Example E1)
{
    cout<<E1.a;
}
int main()
{
    Example E1;
    // E1.geta(134);
    Test T1;
    T1.display(E1);
}