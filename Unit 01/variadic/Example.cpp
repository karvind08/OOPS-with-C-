#include <iostream>
using namespace std;
#include <cstdarg>

void sum(int count, ...)
{
    int value;

    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        value = va_arg(args, int);
        cout<<value<<endl;
    }

    va_end(args);
}

int main()
{
    sum(4, 10, 20, 30, 40);
    cout<<"\n The second fucntion \n";
    sum(3, 5, 15, 25);
    cout<<"\n The Third fucntion \n";
    sum(5, 15, 25);
    return 0;
}