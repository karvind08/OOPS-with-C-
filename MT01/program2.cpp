#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int EmployeeNo;
    string name;

public:
    // Constructor
    Employee(int eno, string n)
    {
        EmployeeNo = eno;
        name = n;
    }

    // Getter functions
    int getEmployeeNo() const
    {
        return EmployeeNo;
    }

    string getName() const
    {
        return name;
    }
};

// Function accepting two Employee objects as constant references
void displayHigherEmployee(const Employee &e1, const Employee &e2)
{
    if (e1.getEmployeeNo() > e2.getEmployeeNo())
    {
        cout << "Employee with higher Employee Number:" << endl;
        cout << "Employee No: " << e1.getEmployeeNo()
             << "\nName: " << e1.getName() << endl;
    }
    else if (e2.getEmployeeNo() > e1.getEmployeeNo())
    {
        cout << "Employee with higher Employee Number:" << endl;
        cout << "Employee No: " << e2.getEmployeeNo()
             << "\nName: " << e2.getName() << endl;
    }
    else
    {
        cout << "Both employees have the same Employee Number." << endl;
    }
}

int main()
{
    Employee emp1(101, "Rahul");
    Employee emp2(205, "Amit");

    displayHigherEmployee(emp1, emp2);

    return 0;
}