// main.cpp
// This program tests exceptions for the Factory Workers program

#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
using namespace std;

int main() {

    // Employee test
    //
    cout << "----- Employee Invalid Number Test -----" << endl;

    try {
        Employee employee1("John Smith", 10000, "01/15/2022");
        employee1.printEmployee();
    }
    catch (Employee::InvalidEmployeeNumber) {
        cout << "Error: Invalid employee number. Number must be between 0 and 9999." << endl;
    }

    cout << endl;
    cout << "----- Employee Valid Test -----" << endl;

    try {
        Employee employee2("Maria Lopez", 1002, "03/20/2023");
        employee2.printEmployee();
    }
    catch (Employee::InvalidEmployeeNumber) {
        cout << "Error: Invalid employee number. Number must be between 0 and 9999." << endl;
    }


    // Production worker shift test
    //
    cout << endl << endl;
    cout << "----- ProductionWorker Invalid Shift Test -----" << endl;

    try {
        ProductionWorker worker1("Alice Johnson", 2001, "02/10/2021", 3, 18.50);
        worker1.printProductionWorker();
    }
    catch (Employee::InvalidEmployeeNumber) {
        cout << "Error: Invalid employee number. Number must be between 0 and 9999." << endl;
    }
    catch (ProductionWorker::InvalidShift) {
        cout << "Error: Invalid shift. Shift must be 1 for day or 2 for night." << endl;
    }
    catch (ProductionWorker::InvalidPayRate) {
        cout << "Error: Invalid pay rate. Pay rate cannot be negative." << endl;
    }

    cout << endl;
    cout << "----- ProductionWorker Valid Shift Test -----" << endl;

    try {
        ProductionWorker worker2("Alice Johnson", 2001, "02/10/2021", 1, 18.50);
        worker2.printProductionWorker();
    }
    catch (Employee::InvalidEmployeeNumber) {
        cout << "Error: Invalid employee number. Number must be between 0 and 9999." << endl;
    }
    catch (ProductionWorker::InvalidShift) {
        cout << "Error: Invalid shift. Shift must be 1 for day or 2 for night." << endl;
    }
    catch (ProductionWorker::InvalidPayRate) {
        cout << "Error: Invalid pay rate. Pay rate cannot be negative." << endl;
    }

    // Production worker pay test
    //
    cout << endl << endl;
    cout << "----- ProductionWorker Invalid Pay Test -----" << endl;

    try {
        ProductionWorker worker3("Bob Lee", 2002, "06/05/2020", 2, -20.75);
        worker3.printProductionWorker();
    }
    catch (Employee::InvalidEmployeeNumber) {
        cout << "Error: Invalid employee number. Number must be between 0 and 9999." << endl;
    }
    catch (ProductionWorker::InvalidShift) {
        cout << "Error: Invalid shift. Shift must be 1 for day or 2 for night." << endl;
    }
    catch (ProductionWorker::InvalidPayRate) {
        cout << "Error: Invalid pay rate. Pay rate cannot be negative." << endl;
    }

    cout << endl;
    cout << "----- ProductionWorker Valid Pay Test -----" << endl;

    try {
        ProductionWorker worker4("Bob Lee", 2002, "06/05/2020", 2, 20.75);
        worker4.printProductionWorker();
    }
    catch (Employee::InvalidEmployeeNumber) {
        cout << "Error: Invalid employee number. Number must be between 0 and 9999." << endl;
    }
    catch (ProductionWorker::InvalidShift) {
        cout << "Error: Invalid shift. Shift must be 1 for day or 2 for night." << endl;
    }
    catch (ProductionWorker::InvalidPayRate) {
        cout << "Error: Invalid pay rate. Pay rate cannot be negative." << endl;
    }

    return 0;
}