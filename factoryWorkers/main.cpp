// main.cpp
// Menu-driven program for Factory Workers with exceptions

#include <iostream>
#include <string>
#include <limits>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

int main() {
    int choice;

    do {
        cout << endl;
        cout << "----- Factory Workers Menu -----" << endl;
        cout << "1. Enter Production Worker" << endl;
        cout << "2. Enter Shift Supervisor" << endl;
        cout << "3. Enter Team Leader" << endl;
        cout << "4. Exit" << endl;
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

        //
        // ProductionWorker Menu Option
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

        //
        // ShiftSupervisor Menu Option
        else if (choice == 2) {
            string name;
            string hireDate;

            int employeeNumber;

            double salary;
            double bonus;

            bool valid = false;

            while (!valid) {
                try {
                    cout << endl;

                    cout << "Enter employee name: ";
                    getline(cin, name);

                    cout << "Enter employee number: ";
                    cin >> employeeNumber;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Error: Employee number must be a number." << endl;
                        cout << "Please re-enter the record." << endl;
                        continue;
                    }

                    cout << "Enter hire date: ";
                    cin >> hireDate;

                    cout << "Enter annual salary: ";
                    cin >> salary;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Error: Salary must be a number." << endl;
                        cout << "Please re-enter the record." << endl;
                        continue;
                    }

                    cout << "Enter annual bonus: ";
                    cin >> bonus;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Error: Bonus must be a number." << endl;
                        cout << "Please re-enter the record." << endl;
                        continue;
                    }

                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    // Creates ShiftSupervisor object
                    ShiftSupervisor supervisor(name, employeeNumber, hireDate, salary, bonus);

                    cout << endl;
                    cout << "----- Valid Shift Supervisor Record -----" << endl;

                    supervisor.printShiftSupervisor();

                    valid = true;
                }
                catch (Employee::InvalidEmployeeNumber) {
                    cout << "Error: Invalid employee number. Number must be between 0 and 9999." << endl;
                    cout << "Please re-enter the record." << endl;
                }
            }
        }

        //
        // TeamLeader Menu Option
        else if (choice == 3) {
            string name;
            string hireDate;

            int employeeNumber;
            int shift;

            double payRate;
            double monthlyBonus;

            int requiredHours;
            int attendedHours;

            bool valid = false;

            while (!valid) {
                try {
                    cout << endl;

                    cout << "Enter employee name: ";
                    getline(cin, name);

                    cout << "Enter employee number: ";
                    cin >> employeeNumber;

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

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Error: Shift must be a number." << endl;
                        cout << "Please re-enter the record." << endl;
                        continue;
                    }

                    cout << "Enter hourly pay rate: ";
                    cin >> payRate;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Error: Pay rate must be a number." << endl;
                        cout << "Please re-enter the record." << endl;
                        continue;
                    }

                    cout << "Enter monthly bonus: ";
                    cin >> monthlyBonus;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Error: Monthly bonus must be a number." << endl;
                        cout << "Please re-enter the record." << endl;
                        continue;
                    }

                    cout << "Enter required training hours: ";
                    cin >> requiredHours;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Error: Required hours must be a number." << endl;
                        cout << "Please re-enter the record." << endl;
                        continue;
                    }

                    cout << "Enter attended training hours: ";
                    cin >> attendedHours;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Error: Attended hours must be a number." << endl;
                        cout << "Please re-enter the record." << endl;
                        continue;
                    }

                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    // Creates TeamLeader object
                    TeamLeader leader(name, employeeNumber, hireDate, shift,
                        payRate, monthlyBonus, requiredHours, attendedHours);

                    cout << endl;
                    cout << "----- Valid Team Leader Record -----" << endl;

                    leader.printTeamLeader();

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

        //
        // Exit Option
        else if (choice == 4) {
            cout << "Exiting program." << endl;
        }

        //
        // Invalid Menu Choice
        else {
            cout << "Error: Invalid menu choice." << endl;
        }

    } while (choice != 4);

    return 0;
}