#include <iostream>
#include "CreateAndDestroy.h"
using namespace std;

void create();
CreateAndDestroyer first(1, "(global before main)");
int main(){
    cout<< "MAIN FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroyer second{3, "(local automatic in main)"};
    static CreateAndDestroyer third{3, "(local static in main)"};
    create();
    cout<< "MAIN FUNCTION: EXECUTION RESUMES" << endl;
    CreateAndDestroyer fourth{4, "(local automatic in main)"};
    cout<< "MAIN FUNCTION: EXECUTION ENDS" << endl;
    return 0;
}
void create(){
    cout<< "CREATE FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroyer fifth{5, "(local automatic in create)"};
    static CreateAndDestroyer sixth{6, "(local static in create)"};
    CreateAndDestroyer seventh{7, "(local automatic in create)"};
    cout<< "CREATE FUNCTION: EXECUTION ENDS" << endl;
}