#include <iostream>
#include "RPG.h"

using namespace std;

void displayStats(RPG player1, RPG player2){
    cout<< player1.getName()<<" health: "<<player1.getHealth()<<" "<<player2.getName()<<" health: "<<player2.getHealth()<<endl;
}
void displayEnd(RPG player1, RPG player2){
    if(player1.isAlive()){
        cout<< player1.getName()<<" defeated  "<<player2.getName()<<"! Good game!"<<endl;
    }
    else{
        cout<< player2.getName()<<" defeated  "<<player1.getName()<<"! Good game!"<<endl;
    }
}
void gameLoop(RPG *player1, RPG *player2){
    while (player1 ->isAlive() && player2 ->isAlive()){
        displayStats(*player1,*player2);
        cout<< player1->getName()<< "'s turn"<<endl;
        player1->useSkill(player2);
        if(!player2->isAlive()){
            break;
        }
        cout<<"---"<<endl;
    }
}
int main() {
    RPG player1("Miz", 70, 15, 5, "mage");
    RPG player2; 
    gameLoop(&player1, &player2);
    displayEnd(player1, player2);
    return 0;
}