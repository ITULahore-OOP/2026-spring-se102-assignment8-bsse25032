#ifndef STAFF_H
#define STAFF_H
#include <string>
#include <iostream>
#include "UniversityMember.h"
#include "AccessCard.h"
using namespace std;
class Staff: virtual public UniversityMember{
    //private attribute
private:
double salary;
AccessCard card; //(Demonstrates Composition)
//public attribute
public:
//constructor
Staff(string name, int memberID, double salary, AccessCard card);
//getters
double getSalary();
//display function
void displayRole() override; // (Overrides base class function)
//displays card info
void displayCard();
};
#endif