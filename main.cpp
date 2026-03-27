#include <iostream>
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "AccessCard.h"
#include "TutoringSession.h"
#include "Department.h"
using namespace std;
int main() {

    // ---> Create objects <---
    Student s1("Ali", 1, 3.5);
    Student s2("Sara", 2, 3.8);

    AccessCard c1("C101", 1);
    Staff st1("Sir Ahmed", 10, 50000, c1);

    AccessCard c2("C102", 2);
    TeachingAssistant ta1("Usman", 20, 3.9, 20000, c2, 10);

    // ---> Department <---
    Department d("CS");

    d.addMember(&s1);
    d.addMember(&s2);
    d.addMember(&st1);
    d.addMember(&ta1);

    cout << "\n--- All Members ---\n";
    d.displayAllRoles();   // polymorphism

    // ---> Tutoring Sessions <---
    TutoringSession t1(1, 60, &ta1, &s1);
    TutoringSession t2(2, 90, &ta1, &s2);

    cout << "\n--- Sessions ---\n";
    t1.displaySession();
    t2.displaySession();

    // ---> Operator + <---
    TutoringSession t3 = t1 + t2;
    cout << "\n--- Combined Session ---\n";
    t3.displaySession();

    // ---> Operator > <---
    if(t2 > t1)
        cout << "\nt2 is longer\n";
    else
        cout << "\nt1 is longer\n";

    // ---> TA grading <---
    cout << "\n--- Grading ---\n";
    ta1.gradeAssignment(90);
    ta1.gradeAssignment("A");

    return 0;
}