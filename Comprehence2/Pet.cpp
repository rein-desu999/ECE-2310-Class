#include "Pet.h"

Pet::Pet(){
    name = "Unknown";
    age = 0;
    owner = "Unknown";
    isHouseTrained = false;
}
Pet::Pet(string name, int age, string owner, bool isHouseTrained){
    this->name = name;
    this->age = age;
    this->owner = owner;
    this->isHouseTrained = isHouseTrained;
}
string Pet::getname() const{
    return name;
}
int Pet::getage() const{
    return age;
}
string Pet::getowner() const{
    return owner;
}
bool Pet::getisHouseTrained() const{
    return isHouseTrained;
}
void Pet::updateName(string new_name){
    this->name = new_name;
}
void Pet::updateAge(){
    age++;
}
void Pet::updateOwner(string adopter){
    owner = adopter;
}
void Pet::updateHouseTrained(){
    isHouseTrained = !isHouseTrained;
}
