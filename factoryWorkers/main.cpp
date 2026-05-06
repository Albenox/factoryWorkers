// main.cpp
// Menu-driven program for Factory Workers with exceptions

#include <iostream>
#include <string>
#include <limits>
#include "Employee.h"
#include "ProductionWorker.h"
using namespace std;

int main() {
    int choice;

    do {
        cout << endl;
        cout << "----- Factory Workers Menu -----" << endl;
        cout << "1. Enter Production Worker" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        // Checks if menu input failed
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Error: Menu choice must be a number." << endl;
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 1) {
            string name;
            string hireDate;
            int employeeNumber;
            int shift;
            double payRate;

            bool valid = false;

            while (!valid) {
                try {
                    cout << endl;

                    cout << "Enter employee name: ";
                    getline(cin, name);

                    cout << "Enter employee number: ";
                    cin >> employeeNumber;

                    // Checks if employee number input failed
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Error: Employee number must be a number." << endl;
                        cout << "Please re-enter the record." << endl;
                        continue;
                    }

                    cout << "Enter hire date: ";
                    cin >> hireDate;

                    cout << "Enter shift, 1 for day or 2 for night: ";
                    cin >> shift;

                    // Checks if shift input failed
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Error: Shift must be a number." << endl;
                        cout << "Please re-enter the record." << endl;
                        continue;
                    }

                    cout << "Enter hourly pay rate: ";
                    cin >> payRate;

                    // Checks if pay rate input failed
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Error: Pay rate must be a number." << endl;
                        cout << "Please re-enter the record." << endl;
                        continue;
                    }

                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    // Creates ProductionWorker object
                    ProductionWorker worker(name, employeeNumber, hireDate, shift, payRate);

                    cout << endl;
                    cout << "----- Valid Production Worker Record -----" << endl;

                    worker.printProductionWorker();

                    valid = true;
                }
                catch (Employee::InvalidEmployeeNumber) {
                    cout << "Error: Invalid employee number. Number must be between 0 and 9999." << endl;
                    cout << "Please re-enter the record." << endl;
                }
                catch (ProductionWorker::InvalidShift) {
                    cout << "Error: Invalid shift. Shift must be 1 for day or 2 for night." << endl;
                    cout << "Please re-enter the record." << endl;
                }
                catch (ProductionWorker::InvalidPayRate) {
                    cout << "Error: Invalid pay rate. Pay rate cannot be negative." << endl;
                    cout << "Please re-enter the record." << endl;
                }
            }
        }
        else if (choice == 2) {
            cout << "Exiting program." << endl;
        }
        else {
            cout << "Error: Invalid menu choice." << endl;
        }

    } while (choice != 2);

    return 0;
}