#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double salary;

public:
    void setEmployee(string n, double s) {
        name = n;
        salary = s;
    }

    void displayEmployee() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Developer : public Employee {
public:
    void displayRole() {
        cout << "Role: Developer" << endl;
    }
};

class Designer : public Employee {
public:
    void displayRole() {
        cout << "Role: Designer" << endl;
    }
};

int main() {
    Developer d;
    d.setEmployee("Karan", 60000);

    cout << "Developer Details:" << endl;
    d.displayEmployee();
    d.displayRole();

    cout << endl;

    Designer ds;
    ds.setEmployee("Priya", 55000);

    cout << "Designer Details:" << endl;
    ds.displayEmployee();
    ds.displayRole();

    return 0;
}