#include "RPG.h"
#include <iostream>
#include <string>
using namespace std;

RPG::RPG(){
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
}
RPG::RPG(string name, int health, int strength, int defense, string type){
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;
    setSkills();
}
string RPG::getName() const{
    return name;
}
int RPG::getHealth() const{
    return health;
}
int RPG::getStrength() const{
    return strength;
}
int RPG::getDefense() const{
    return defense;
}
bool RPG::isAlive() const{
    return health > 0;
}
array<string, SKILL_SIZE> RPG::getSkills() const{
    return skills;
}
void RPG::setSkills(){
    if(type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";
    }
    else if(type == "thief"){
        skills[0] = "pilfer";
        skills[1] = "jab";
    }
    else if(type == "archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    }
    else{
        skills[0] = "slash";
        skills[1] = "parry";
    }
}
void RPG::updateHealth(int new_health){
    this->health = new_health;
}
void RPG::useSkill(RPG *target, string skill){
    int damage = (strength *2) - target->getDefense();
    if(damage < 0){
        damage = 0;
    }
    target->updateHealth(target->getHealth() - damage);
    printAction(skill, *target);
}
void RPG::printAction(string skill, RPG target){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), target.getName().c_str());
}