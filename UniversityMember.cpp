#include "UniversityMember.h"
//constructor
UniversityMember::UniversityMember(string name, int memberID): name(name),memberID(memberID){
}
//virtual destructor
 UniversityMember:: ~UniversityMember(){}
//getters
string UniversityMember::getName(){
    return name; //returning name
}
int UniversityMember::getMemberID(){
    return memberID;//returning member id
}
