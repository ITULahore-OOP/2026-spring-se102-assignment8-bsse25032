#include"TeachingAssistant.h"
//constructor
TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours)
:UniversityMember(name,memberID),Student(name,memberID,cgpa),Staff(name,memberID,salary,card),workingHours(workingHours){}

//display role
void TeachingAssistant::displayRole(){
    cout<<"Role: Teaching Assistant\n";
}
//assigns score
void TeachingAssistant::gradeAssignment(int score){
    cout<<"numeric score: "<<score<<"/100"<<endl;
}
//assigns grade
void TeachingAssistant::gradeAssignment(string letterGrade){
cout<<"letter grade: "<<letterGrade<<endl;
}
