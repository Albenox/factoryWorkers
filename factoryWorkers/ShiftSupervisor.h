// ShiftSupervisor.h
// Contains the header for the ShiftSupervisor class

#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualBonus;

public:
    // Constructor
    ShiftSupervisor(string n = "", int number = 0, string date = "", double salary = 0.0, double bonus = 0.0);

    // Preconditions: none
    // Postconditions: returns the supervisor's annual salary
    double getAnnualSalary() const;

    // Preconditions: none
    // Postconditions: returns the supervisor's annual production bonus
    double getAnnualBonus() const;

    // Preconditions: salary should be a valid annual salary
    // Postconditions: updates the supervisor's annual salary
    void setAnnualSalary(double salary);

    // Preconditions: bonus should be a valid annual production bonus
    // Postconditions: updates the supervisor's annual production bonus
    void setAnnualBonus(double bonus);

    // Preconditions: ShiftSupervisor object must contain valid data
    // Postconditions: prints employee data and shift supervisor data
    void printShiftSupervisor() const;
};

#endif