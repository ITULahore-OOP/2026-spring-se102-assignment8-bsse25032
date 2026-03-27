#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H
#include <iostream>
using namespace std;
class Student;
class TeachingAssistant;
class TutoringSession {
    //private members 
private:
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;
    Student* student;
//public functions
public:
//constructor
    TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student);
    //getter
    double getDuration() const;
    //display function
    void displaySession() const;
    //operator overloading function
    TutoringSession operator+(const TutoringSession& other) const;
};

// Non-member function
bool operator>(const TutoringSession& s1, const TutoringSession& s2);

#endif