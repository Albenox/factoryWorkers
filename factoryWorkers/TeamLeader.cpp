// TeamLeader.cpp
// Contains the implementation for the TeamLeader class

#include <iostream>
#include "TeamLeader.h"
using namespace std;

// Constructor using initializer list (calls ProductionWorker, which calls Employee)
TeamLeader::TeamLeader(string n, int number, string date, int s, double pay,
    double bonus, int requiredHours, int attendedHours)
    : ProductionWorker(n, number, date, s, pay)
{
    monthlyBonus = bonus;
    requiredTrainingHours = requiredHours;
    attendedTrainingHours = attendedHours;
}

double TeamLeader::getMonthlyBonus() const {
    return monthlyBonus;
}

int TeamLeader::getRequiredTrainingHours() const {
    return requiredTrainingHours;
}

int TeamLeader::getAttendedTrainingHours() const {
    return attendedTrainingHours;
}

void TeamLeader::setMonthlyBonus(double bonus) {
    monthlyBonus = bonus;
}

void TeamLeader::setRequiredTrainingHours(int hours) {
    requiredTrainingHours = hours;
}

void TeamLeader::setAttendedTrainingHours(int hours) {
    attendedTrainingHours = hours;
}

void TeamLeader::printTeamLeader() const {
    // Calls ProductionWorker print FIRST (which calls Employee print)
    printProductionWorker();

    cout << "Monthly Bonus: " << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}