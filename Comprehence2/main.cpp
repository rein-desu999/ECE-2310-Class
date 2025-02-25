#include "Pet.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Pet overloaded = Pet("Dog", 5, "John", true);
    Pet unknown = Pet();
    printf("Name: %s \tAge: %i \tOwner: %s \tHouse Trained: %s\n", unknown.getname().c_str(), unknown.getage(), unknown.getowner().c_str(), unknown.getisHouseTrained()? "Yes":"No");
    printf("Name: %s \tAge: %i \tOwner: %s \tHouse Trained: %s\n", overloaded.getname().c_str(), overloaded.getage(), overloaded.getowner().c_str(), overloaded.getisHouseTrained()? "Yes":"No");
    overloaded.updateName("Cat");
    overloaded.updateAge();
    overloaded.updateOwner("Jane");
    overloaded.updateHouseTrained();
    printf("Name: %s \tAge: %i \tOwner: %s \tHouse Trained: %s\n", overloaded.getname().c_str(), overloaded.getage(), overloaded.getowner().c_str(), overloaded.getisHouseTrained() ? "Yes" : "No");
    return 0;   
}