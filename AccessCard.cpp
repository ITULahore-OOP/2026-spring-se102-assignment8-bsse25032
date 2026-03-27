#include "AccessCard.h"
AccessCard::AccessCard(string cardID, int accessLevel): cardID(cardID),accessLevel(accessLevel){}
string AccessCard::getCardID(){
    return cardID;
}
int AccessCard::getAccessLevel(){
    return accessLevel;
}
void AccessCard::displayCardInfo(){
    cout<<"Card ID: "<<cardID<<"\n"<<"Access Level"<<accessLevel<<endl;
}