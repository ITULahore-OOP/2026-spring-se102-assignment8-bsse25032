#include "TutoringSession.h"
// Constructor
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student)
: sessionID(sessionID), durationMinutes(durationMinutes), ta(ta), student(student) {}

// Getter
double TutoringSession::getDuration() const {
    return durationMinutes;
}

// Display function
void TutoringSession::displaySession() const {
    cout<<"Session ID: " << sessionID << "\n"
         <<"Session duration: " <<durationMinutes<<" minutes" <<endl;
}

// Member operator+ (sums durations and returns new object)
TutoringSession TutoringSession::operator+(const TutoringSession& other) const {
    // New sessionID = 0, TA and student = nullptr 
   
    return TutoringSession(
        0,
        this->durationMinutes + other.durationMinutes, // (just duration sum)
        nullptr,
        nullptr
    );
}
// Non-member operator> (compare durations)
bool operator>(const TutoringSession& s1, const TutoringSession& s2) {
    return s1.getDuration() > s2.getDuration();
}