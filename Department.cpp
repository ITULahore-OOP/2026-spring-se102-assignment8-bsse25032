#include "Department.h"
Department::Department(string departmentName):departmentName(departmentName),memberCount(0){}

void Department::addMember(UniversityMember* member){
if(memberCount < 50){
    members[memberCount] = member;
    memberCount++;
}
}

void Department::displayAllRoles(){
    for(int i = 0; i < memberCount; i++ ){
        members[i]->displayRole();
    }
}