// ProductionWorker.h
// Contains the header for the ProductionWorker class

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
private:
    int shift;
    double hourlyPayRate;

public:
    // Exception class for invalid shift values
    class InvalidShift {};

    // Exception class for invalid hourly pay rates
    class InvalidPayRate {};

    // Constructor
    ProductionWorker(string n = "", int number = 0, string date = "", int s = 1, double pay = 0.0);

    // Getters
    int getShift() const;
    double getHourlyPayRate() const;

    // Setters
    void setShift(int s);
    void setHourlyPayRate(double pay);

    // Print production worker info
    void printProductionWorker() const;
};

#endif