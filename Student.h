#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include "UniversityMember.h"
using namespace std;
class Student : virtual public UniversityMember{
    //private attributes
    private:
    double cgpa;
    //public attributes
    public:
    //constructor
Student(string name, int memberID, double cgpa);
//getter
double getCGPA();
//setter for updating the gpa
void updateCGPA(double newCGPA);
void displayRole() override; // (Overrides base class function)

};
#endif