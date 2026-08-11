#include<iostream>
#include<cstdarg>
using namespace std;
int sum(int size,...)
{
    int n,total=0;
    va_list args;
    va_start(args,size);
    for(int i=0;i<size;i++){
        n = va_arg(args,int);
        total = total+n;
    }
    return total;
}
int main()
{
    int s = sum(3,10,20,5);
    cout<<"\n The sum is: "<<s;
    return 0;
}