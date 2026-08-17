#include<iostream>
using namespace std;
class Student
{
    int roll;
    public:
        void getroll(int);
        void showroll();
};

void Student::getroll(int r)
{
    roll = r;
}
inline void Student::showroll()
{
    cout<<"\nThe roll number: "<<roll;
}

int main()
{
    Student S1;
    S1.getroll(10);
    S1.showroll();
    Student S2;
    S2.getroll(20);
    S2.showroll();
    S1.showroll();
    return(0);
}