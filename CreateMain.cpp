#include <iostream>
#include "CreateAndDestroyer.h"
using namespace std;

void create();
CreateAndDestroyer first(1, "(global before main)");
int main(){
    cout<< "MAIN FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroyer third{3, "(local automatic in main)"};
    static CreateAndDestroyer fourth{4, "(local static in main)"};
    create();
    coutn<< "MAIN FUNCTION: EXECUTION RESUMES" << endl;
    CreateAndDestroyer fourth{4, "(local automatic in main)"};
    cout<< "MAIN FUNCTION: EXECUTION ENDS" << endl;
    return 0;
}