// ProductionWorker.cpp
// Contains the implementation for the ProductionWorker class

#include <iostream>
#include "ProductionWorker.h"
using namespace std;

// Constructor using initializer list
ProductionWorker::ProductionWorker(string n, int number, string date, int s, double pay)
    : Employee(n, number, date)
{
    // Uses setters so constructor also validates these values
    setShift(s);
    setHourlyPayRate(pay);
}

int ProductionWorker::getShift() const {
    return shift;
}

double ProductionWorker::getHourlyPayRate() const {
    return hourlyPayRate;
}

void ProductionWorker::setShift(int s) {
    // Shift must be 1 for day or 2 for night
    if (s != 1 && s != 2) {
        throw InvalidShift();
    }

    shift = s;
}

void ProductionWorker::setHourlyPayRate(double pay) {
    // Pay rate cannot be negative
    if (pay < 0) {
        throw InvalidPayRate();
    }

    hourlyPayRate = pay;
}

void ProductionWorker::printProductionWorker() const {
    printEmployee();

    cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
    cout << "Hourly Pay Rate: " << hourlyPayRate << endl;
}
