// Employee.h
// Contains the header for the Employee base class

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeNumber;
    string hireDate;

public:
    // Constructor
    Employee(string n = "", int number = 0, string date = "");

    // Preconditions: none
    // Postconditions: returns the employee name
    string getName() const;

    // Preconditions: none
    // Postconditions: returns the employee number
    int getEmployeeNumber() const;

    // Preconditions: none
    // Postconditions: returns the hire date
    string getHireDate() const;

    // Preconditions: n should contain a valid employee name
    // Postconditions: updates the employee name
    void setName(string n);

    // Preconditions: number should contain a valid employee number
    // Postconditions: updates the employee number
    void setEmployeeNumber(int number);

    // Preconditions: date should contain a valid hire date
    // Postconditions: updates the hire date
    void setHireDate(string date);

    // Preconditions: Employee object must contain valid data
    // Postconditions: prints all employee information
    void printEmployee() const;
};

#endif