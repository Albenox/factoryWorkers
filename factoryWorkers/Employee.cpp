// Employee.cpp
// Contains the implementation for the Employee class

#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(string n, int number, string date) {
    name = n;
    employeeNumber = number;
    hireDate = date;
}

string Employee::getName() const {
    return name;
}

int Employee::getEmployeeNumber() const {
    return employeeNumber;
}

string Employee::getHireDate() const {
    return hireDate;
}

void Employee::setName(string n) {
    name = n;
}

void Employee::setEmployeeNumber(int number) {
    employeeNumber = number;
}

void Employee::setHireDate(string date) {
    hireDate = date;
}

// Prints employee info
void Employee::printEmployee() const {
    cout << "Name: " << name << endl;
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Hire Date: " << hireDate << endl;
}