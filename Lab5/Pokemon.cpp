#include "Pokemon.h"
#include <iostream>

Pokemon::Pokemon() {
    name = "Unknown";
    hp = 0;
    attack = 0;
    defense = 0;
    cout<<"Default Construction (Pokemnon)\n";
}
Pokemon::Pokemon(string name, int hp,int att, int def, vector<string> type) {
    this->name = name;
    this->hp = hp;
    attack = att;
    defense = def;
    this->type = type;
    cout<<"Overloaded COnstruction (Pokemon)\n";
}

void Pokemon::speak() {
    cout << "...\n";
}

void Pokemon::printStats(){
    printf("Name:%s\t HP:%i\t DEF:%i\n ATT:%i\t", name.c_str(), hp, defense, attack);
    cout << "Type: ";
    for(int i = 0; i < type.size(); i++) {
        cout << type[i] << " ";
    }
    cout << endl;
}