#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empid;
    string name;

public:
    // Constructor
    Employee(int id, string n)
    {
        empid = id;
        name = n;
    }

    // Friend function declaration
    friend void displayHigherEmployee(const Employee& e1, const Employee& e2);
};

// Function to display employee with higher employee number
void displayHigherEmployee(const Employee& e1, const Employee& e2)
{
    if (e1.empid > e2.empid)
    {
        cout << "Employee with higher Employee Number:" << endl;
        cout << "Employee No: " << e1.empid<< ", Name: " << e1.name << endl;
    }
    else if (e2.empid > e1.empid)
    {
        cout << "Employee with higher Employee Number:" << endl;
        cout << "Employee No: " << e2.empid<< ", Name: " << e2.name << endl;
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