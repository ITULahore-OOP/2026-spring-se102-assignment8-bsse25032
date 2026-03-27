#include "Student.h"
//constructor
Student::Student(string name, int memberID, double cgpa):UniversityMember(name,memberID),cgpa(cgpa){}
double Student::getCGPA(){
    return cgpa;//returning cgpa
}
//update cgpa by setter functiob
void Student::updateCGPA(double newCGPA){
    cgpa=newCGPA;
}
//display role function
void Student::displayRole(){
    cout<<"Role: Student\n";
}