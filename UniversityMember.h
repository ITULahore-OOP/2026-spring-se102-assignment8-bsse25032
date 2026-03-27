#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H
#include <string>
#include <iostream>
using namespace std;
class UniversityMember{

private: 
string name;
int memberID;
public:
//constructor
UniversityMember(string name, int memberID);
//virtual destructor
virtual ~UniversityMember();
//getters
string getName();
int getMemberID();
virtual void displayRole() = 0; //(Pure Virtual Function)
};
#endif