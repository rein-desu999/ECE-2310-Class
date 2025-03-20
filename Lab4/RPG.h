#include <iostream>
#include <string>
#include <array>
using namespace std;

const int SKILL_SIZE = 2;

#ifndef RPG_H
#define RPG_H
class RPG{
    public:
        RPG();
        RPG(string name, int health, int strength, int defense, string type);

        string getName() const;
        int getHealth() const;
        int getStrength() const;
        int getDefense() const;
        bool isAlive() const;
        array<string, SKILL_SIZE> getSkills() const;

        void setSkills();
        void updateHealth(int new_health);
        void attack(RPG *target);
        void useSkill(RPG *target);
        void printAction(string action, RPG target);
    private:
        string name;
        int health;
        int strength;
        int defense;
        string type;
        array<string, SKILL_SIZE> skills;
};
#endif