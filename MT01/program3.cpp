#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int EmployeeNo;
    string name;

public:
    Employee(int eno, string n);

    void displayHigher(const Employee &e) const;
};

// Constructor definition outside the class
Employee::Employee(int eno, string n)
{
    EmployeeNo = eno;
    name = n;
}

// Member function definition outside the class
void Employee::displayHigher(const Employee &e) const
{
    if (EmployeeNo > e.EmployeeNo)
    {
        cout << "Employee with higher Employee Number:" << endl;
        cout << "Employee No: " << EmployeeNo
             << "\nName: " << name << endl;
    }
    else if (EmployeeNo < e.EmployeeNo)
    {
        cout << "Employee with higher Employee Number:" << endl;
        cout << "Employee No: " << e.EmployeeNo
             << "\nName: " << e.name << endl;
    }
    else
    {
        cout << "Both employees have the same Employee Number." << endl;
    }
}

int main()
{
    Employee e1(1010, "Rahul");
    Employee e2(205, "Amit");

    e1.displayHigher(e2);

    return 0;
}