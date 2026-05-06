// Employee.cpp
// Contains the implementation for the Employee class

#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(string n, int number, string date) {
    name = n;
    hireDate = date;

    // Uses setter so constructor also validates the employee number
    setEmployeeNumber(number);
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
    // Employee number must be between 0 and 9999
    if (number < 0 || number > 9999) {
        throw InvalidEmployeeNumber();
    }

    employeeNumber = number;
}

void Employee::setHireDate(string date) {
    hireDate = date;
}

void Employee::printEmployee() const {
    cout << "Name: " << name << endl;
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Hire Date: " << hireDate << endl;
}