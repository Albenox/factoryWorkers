// ProductionWorker.cpp
// Contains the implementation for the ProductionWorker class

#include <iostream>
#include "ProductionWorker.h"
using namespace std;

// Constructor using initializer list (IMPORTANT)
ProductionWorker::ProductionWorker(string n, int number, string date, int s, double pay)
    : Employee(n, number, date)   // calls base class constructor
{
    shift = s;
    hourlyPayRate = pay;
}

int ProductionWorker::getShift() const {
    return shift;
}

double ProductionWorker::getHourlyPayRate() const {
    return hourlyPayRate;
}

void ProductionWorker::setShift(int s) {
    shift = s;
}

void ProductionWorker::setHourlyPayRate(double pay) {
    hourlyPayRate = pay;
}

void ProductionWorker::printProductionWorker() const {
    // Call base class function FIRST (VERY IMPORTANT)
    printEmployee();

    cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
    cout << "Hourly Pay Rate: " << hourlyPayRate << endl;
}