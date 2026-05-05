// ProductionWorker.h
// Contains the header for the ProductionWorker class

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

// ProductionWorker inherits all employee info from Employee
class ProductionWorker : public Employee {
private:
    int shift;
    double hourlyPayRate;

public:
    // Constructor
    ProductionWorker(string n = "", int number = 0, string date = "", int s = 1, double pay = 0.0);

    // Preconditions: none
    // Postconditions: returns the worker's shift
    int getShift() const;

    // Preconditions: none
    // Postconditions: returns the worker's hourly pay rate
    double getHourlyPayRate() const;

    // Preconditions: s should be 1 for day shift or 2 for night shift
    // Postconditions: updates the worker's shift
    void setShift(int s);

    // Preconditions: pay should be a valid hourly pay rate
    // Postconditions: updates the worker's hourly pay rate
    void setHourlyPayRate(double pay);

    // Preconditions: ProductionWorker object must contain valid data
    // Postconditions: prints employee data and production worker data
    void printProductionWorker() const;
};

#endif