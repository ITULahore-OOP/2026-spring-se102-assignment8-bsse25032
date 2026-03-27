#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <string>
#include <iostream>
#include "UniversityMember.h"
using namespace std;
class Department{
private:
string departmentName;
UniversityMember* members[50]; //(Demonstrates Aggregation and Polymorphic Collections)
int memberCount;
// (To track the current number of members added)
public:
Department(string departmentName);
void addMember(UniversityMember* member);
void displayAllRoles();
};
#endif
