#include <iostream>
#include "CreateAndDestroyer.h"

using namespace std;
CreateAndDestroyer::CreateAndDestroyer(int ID, string message){
    objectID = ID;
    message = message;
    cout << "Object " << objectID << " constructor runs " << message << endl;
}   
CreateAndDestroyer::~CreateAndDestroyer(){
    cout << (message == "destructor" ? "Destructor" : "Object") << objectID << " destructor runs " << message << endl;
}