
#include "Person.h"

string Person::getName(){
    return name;
}
string Person::getOccupation(){
    return occupation;
}
bool Person::getLivesInIE(){
    return lives_in_IE;
}
void Person::updateName(string new_name){
    name = new_name;
}
void Person::updateAge(int new_age){
    age = new_age;
}
void Person::updateOccupation(string new_occupation){
    occupation = new_occupation;
}
void Person::moveLocation(){
    lives_in_IE = !lives_in_IE;
}
int Person::getAge(){
    return age;
}
bool Person::isOlderThan(Person b){
    return age > b.getAge(); //cannot do b.age because age is private
}
Person::Person(){
    name = "Unknown";
    age = 0;
    occupation = "Unknown";
    lives_in_IE = false;
}
Person::Person(string name, int age, string occupation, bool lives_in_IE/*islive*/){
    this->name = name;
    this->age = age;
    this->occupation = occupation;
    this->lives_in_IE = lives_in_IE; //this-> is used to refer to the class variable
    //lives_in_IE = islive; //if lives_in_IE is used, it will refer to the class variable
}
Person::Person(string name, int a, string occupation, bool islive){
    this->name = name;
    age = a;
    this->occupation = occupation;
    lives_in_IE = islive; //if lives_in_IE is used, it will refer to the class variable
}
