#include <iostream>
#include <stdio.h>
#include "Charmander.h"

Charmander::Charmander() : Pokemon() {
    skills.push_back("Fire");
    skills.push_back("Growl");
    skills.push_back("Scratch");
    cout<<"Default Construction (Charmander)\n";
}

Charmander::Charmander(string name, int hp,int att, int def, vector<string> t, vector<string> s) : Pokemon(name, hp, att, def, type){
    type = t;
    skills = s;
    cout<<"Overloaded Construction (Charmander)\n";
}

void Charmander::speak() {
    cout << "Charmander!\n";
}   

void Charmander::printStats() {
    Pokemon::printStats();
    cout << "Skills: ";
    for(int i = 0; i < skills.size(); i++) {
        cout << skills[i] << "\t";
    }
    cout << endl;
}