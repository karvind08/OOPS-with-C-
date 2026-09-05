#include<iostream>
using namespace std;
class Test;
class Example
{
    public:
        void display(Test);
};
class Test
{
        int a;
    public:
    void geta(int);
    friend void Example::display(Test T);

};
void Test::geta(int x)
{   
    a = x;
}
void Example::display(Test T)
{
    cout<<T.a<<endl;
}

int main()
{
    Test T1;
    T1.geta(199);
    Example E1;
    E1.display(T1);
    // T1.display();

}