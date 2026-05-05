// main.cpp
// This program tests the Factory Workers inheritance hierarchy

#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
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

    // ProductionWorker test
    cout << endl;
    cout << "----- ProductionWorker Test -----" << endl;

    // Object for day shift worker
    ProductionWorker worker1("Alice Johnson", 2001, "02/10/2021", 1, 18.50);

    // Object for night shift worker
    ProductionWorker worker2("Bob Lee", 2002, "06/05/2020", 2, 20.75);

    // Print both workers
    worker1.printProductionWorker();
    cout << endl;
    worker2.printProductionWorker();

    // ShiftSupervisor test
    cout << endl;
    cout << "----- ShiftSupervisor Test -----" << endl;

    // Object for shift supervisor
    ShiftSupervisor supervisor1("Karen Davis", 3001, "08/12/2019", 65000.00, 5000.00);

    // Print supervisor information
    supervisor1.printShiftSupervisor();

    // TeamLeader test
    cout << endl;
    cout << "----- TeamLeader Test -----" << endl;

    // Object for team leader
    TeamLeader leader1("David Wilson", 4001, "11/01/2018", 1, 22.50,
        1000.00, 40, 35);

    // Print team leader information
    leader1.printTeamLeader();

    return 0;
}