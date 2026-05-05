// ShiftSupervisor.cpp
// Contains the implementation for the ShiftSupervisor class

#include <iostream>
#include "ShiftSupervisor.h"
using namespace std;

// Constructor using initializer list to call Employee constructor
ShiftSupervisor::ShiftSupervisor(string n, int number, string date, double salary, double bonus)
    : Employee(n, number, date)
{
    annualSalary = salary;
    annualBonus = bonus;
}

double ShiftSupervisor::getAnnualSalary() const {
    return annualSalary;
}

double ShiftSupervisor::getAnnualBonus() const {
    return annualBonus;
}

void ShiftSupervisor::setAnnualSalary(double salary) {
    annualSalary = salary;
}

void ShiftSupervisor::setAnnualBonus(double bonus) {
    annualBonus = bonus;
}

void ShiftSupervisor::printShiftSupervisor() const {
    // Calls base class print function first
    printEmployee();

    cout << "Annual Salary: " << annualSalary << endl;
    cout << "Annual Production Bonus: " << annualBonus << endl;
}