#include <iostream>
using namespace std;

// Base class Employee
class Employee {
public:
    Employee(string n) : name(n) {}
    virtual ~Employee() {}
    virtual double earnings() = 0; // pure virtual function
    virtual void print() {
        cout << name;
    }
protected:
    string name;
};

// Derived class SalariedEmployee
class SalariedEmployee : public Employee {
public:
    SalariedEmployee(string n, double s) : Employee(n), salary(s) {};
    double earnings() {
        return salary;
    }
    void print() {
        Employee::print();
        cout << " (Salaried, Salary: " << earnings() << ")";
    }
private:
    double salary;
};

// Derived class HourlyEmployee
class HourlyEmployee : public Employee {
public:
    HourlyEmployee(string n, double h, double r) : Employee(n), hours(h), rate(r) {}
    double earnings() {
        return hours * rate;
    }
    void print() {
        Employee::print();
        cout << " (Hourly, Earnings: " << earnings() << ")";
    }
private:
    double hours;
    double rate;
};

int main() {
    // Create objects of each type
    SalariedEmployee salariedEmployee("John", 800);
    HourlyEmployee hourlyEmployee("Jane", 40, 20);

    // Use base class pointers to each object
    Employee* employees[2];
    employees[0] = &salariedEmployee;
    employees[1] = &hourlyEmployee;

    // Print details of all employees
    for (int i = 0; i < 2; i++) {
        employees[i]->print();
        cout << endl;
    }

    return 0;
}
