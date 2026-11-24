#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;

public:
    Student() : Student(0, "Unknown") {
        cout << "Default Constructor" << endl;
    }

    Student(int r, string n) {
        rollNo = r;
        name = n;
        cout << "Parameterized Constructor" << endl;
    }

    void display() {
        cout << "Roll No = " << rollNo
             << ", Name = " << name << endl;
    }
};

int main() {
    Student s1;
    s1.display();

    return 0;
}