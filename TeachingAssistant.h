#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H
#include <string>
#include <iostream>
#include "Student.h"
#include "Staff.h"
using namespace std;
class TeachingAssistant:public Student,public Staff{
    //private members
private:
int workingHours;
//public functions
public:
TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours);
//display function
void displayRole() override;
//setters for grading the assignment
void gradeAssignment(int score);
void gradeAssignment(string letterGrade);
};
#endif