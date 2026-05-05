// TeamLeader.h
// Contains the header for the TeamLeader class

#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    // Constructor
    TeamLeader(string n = "", int number = 0, string date = "", int s = 1, double pay = 0.0,
        double bonus = 0.0, int requiredHours = 0, int attendedHours = 0);

    // Preconditions: none
    // Postconditions: returns the monthly bonus
    double getMonthlyBonus() const;

    // Preconditions: none
    // Postconditions: returns the required training hours
    int getRequiredTrainingHours() const;

    // Preconditions: none
    // Postconditions: returns the attended training hours
    int getAttendedTrainingHours() const;

    // Preconditions: bonus should be a valid monthly bonus
    // Postconditions: updates the monthly bonus
    void setMonthlyBonus(double bonus);

    // Preconditions: hours should be a valid number of required training hours
    // Postconditions: updates the required training hours
    void setRequiredTrainingHours(int hours);

    // Preconditions: hours should be a valid number of attended training hours
    // Postconditions: updates the attended training hours
    void setAttendedTrainingHours(int hours);

    // Preconditions: TeamLeader object must contain valid data
    // Postconditions: prints employee, production worker, and team leader data
    void printTeamLeader() const;
};

#endif