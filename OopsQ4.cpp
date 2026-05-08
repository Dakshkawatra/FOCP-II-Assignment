#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    double monthlySalary;

public:
    void inputDetails() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Monthly Salary: ";
        cin >> monthlySalary;
    }

    double calculateAnnualSalary() {
        return monthlySalary * 12;
    }

    void displayDetails() {
        cout << "\n--- Employee Details ---\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Annual Salary: " << calculateAnnualSalary() << endl;
    }
};

int main() {
    Employee e;
    e.inputDetails();
    e.displayDetails();

    return 0;
}