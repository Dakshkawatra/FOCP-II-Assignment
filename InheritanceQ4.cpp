#include <iostream>
using namespace std;

class Employee {
protected:
    string empName;

public:
    void setEmployee(string name) {
        empName = name;
    }
};

class Department {
protected:
    string deptName;

public:
    void setDepartment(string dept) {
        deptName = dept;
    }
};

class Manager : public Employee, public Department {
public:
    void displayManager() {
        cout << "Employee Name: " << empName << endl;
        cout << "Department: " << deptName << endl;
    }
};

int main() {
    Manager m;

    m.setEmployee("Amit");
    m.setDepartment("HR");

    m.displayManager();

    return 0;
}