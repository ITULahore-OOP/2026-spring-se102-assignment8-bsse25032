#include "Staff.h"
//constructor
Staff::Staff(string name, int memberID, double salary, AccessCard card)
:UniversityMember(name,memberID),salary(salary),card(card){}
//getters
double Staff::getSalary(){
    return salary;//returning salary
}
void Staff::displayRole(){
cout<<"Role: Staff\n";
}  // (Overrides base class function)
void Staff::displayCard(){
    //calling access card functionb
   card.displayCardInfo();
}