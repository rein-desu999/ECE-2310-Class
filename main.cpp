#include "Person.h"

using namespace std;

int main(){
    Person bob = Person("Bob", 25, "Engineer", true);
    printf("Name: %s \tAge: %i \tOccupation: %s tLives in IE: %\n", bob.getName(), bob.getAge(), bob.getOccupation(), bob.getLivesInIE());
    Person unknown = Person();
    return 0;
}