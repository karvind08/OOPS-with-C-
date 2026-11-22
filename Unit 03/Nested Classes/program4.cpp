#include <iostream>
using namespace std;

class Student
{
    public:
        class Result
        {
            private:
                int marks;
            public:
                Result(int m){
                    marks = m;
                }
                void display(){
                    cout << "Marks = " << marks << endl;
                }
        };
    };

int main()
{
    Student::Result R(85);
    R.display();
    return 0;
}