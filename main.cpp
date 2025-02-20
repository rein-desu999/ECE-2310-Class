#include "Person.h"

using namespace std;

int main(){
    Person bob = Person("Bob", 25, "Engineer", true);
    printf("Name: %s \tAge: %i \tOccupation: %s \tLives in IE: %s\n", bob.getName().c_str(), bob.getAge(), bob.getOccupation().c_str(), bob.getLivesInIE() ? "Yes":"No");
    Person unknown = Person();
    return 0;
}