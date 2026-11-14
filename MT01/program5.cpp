#include <iostream>
#include <string>
using namespace std;
void displayStudent(string name = "Unknown", int marks = 0)
{
    cout << "Student Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

int main()
{
    displayStudent("Arvind", 85);
    displayStudent("Amit");
    displayStudent();
    return 0;
}