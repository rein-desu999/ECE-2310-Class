#include <iostream>
#include "RPG.h"

using namespace std;

int main() {
    RPG player1("Miz", 70, 15, 5, "mage");
    RPG player2; 

    while (player1.isAlive() && player2.isAlive()) {
        cout << player1.getName() << " health: " << player1.getHealth() << player2.getName() <<" health: " << player2.getHealth() << endl;

        cout << player1.getName() <<"'s turn" << endl;
        cout << "Skill 1: " << player1.getSkills()[0] << endl;
        cout << "Skill 2: " << player1.getSkills()[1] << endl;
        cout << "Choose a skill to use: Enter 1 or 2" << endl;

        int skillChoice;
        cin >> skillChoice;

        if (skillChoice == 1) {
            player1.useSkill(&player2, player1.getSkills()[0]);
        } else if (skillChoice == 2) {
            player1.useSkill(&player2, player1.getSkills()[1]);
        } else {
            cout << "Invalid choice. Skipping turn." << endl;
        }
        if (!player2.isAlive()) {
            cout << player1.getName()<<" defeated "<<player2.getName() <<"! Good game!" << endl;
            break;
        }

        cout << "---" << endl;
        cout << player1.getName() << " health: " << player1.getHealth() << player2.getName() <<" health: " << player2.getHealth() << endl;

        // MPC's turn
        cout << player2.getName() <<"'s turn" << endl;
        cout << "Skill 1: " << player2.getSkills()[0] << endl;
        cout << "Skill 2: " << player2.getSkills()[1] << endl;
        cout << "Choose a skill to use: Enter 1 or 2" << endl;

        cin >> skillChoice;

        if (skillChoice == 1) {
            player2.useSkill(&player1, player2.getSkills()[0]);
        } 
        else if (skillChoice == 2) {
            player2.useSkill(&player1, player2.getSkills()[1]);
        } 
        else {
            cout << "Invalid choice. Skipping turn." << endl;
        }

        // Check if Miz is defeated
        if (!player1.isAlive()){
            cout << player2.getName()<< " defeated " << player1.getName()<< "! Good game!" << endl;
            break;}

        cout << "---" << endl;
    }
    return 0;
}