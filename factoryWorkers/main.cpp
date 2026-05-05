// main.cpp
// This program tests the Factory Workers inheritance hierarchy

#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    cout << "----- Employee Test -----" << endl;

    // Object made from class with name, employee number, and date
    Employee employee1("John Smith", 1001, "01/15/2022");

    // Prints info of employee that was started with
    employee1.printEmployee();

    // Prints info retrieved from employee using getters
    cout << endl;
    cout << "----- Getter Test -----" << endl;
    cout << "Name: " << employee1.getName() << endl;
    cout << "Employee Number: " << employee1.getEmployeeNumber() << endl;
    cout << "Hire Date: " << employee1.getHireDate() << endl;

    // Prints info of employee that just had info set
    cout << endl;
    cout << "----- Setter Test -----" << endl;

    employee1.setName("Maria Lopez");
    employee1.setEmployeeNumber(1002);
    employee1.setHireDate("03/20/2023");

    employee1.printEmployee();

    return 0;
}