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
    // Exception class for invalid employee numbers
    class InvalidEmployeeNumber {};

    // Constructor
    Employee(string n = "", int number = 0, string date = "");

    // Getters
    string getName() const;
    int getEmployeeNumber() const;
    string getHireDate() const;

    // Setters
    void setName(string n);
    void setEmployeeNumber(int number);
    void setHireDate(string date);

    // Print employee info
    void printEmployee() const;
};

#endif