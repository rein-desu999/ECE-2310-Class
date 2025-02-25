#include <iostream>
#include "Time.h"
using namespace std;

int main(){
    Time t;
    //initialize hourRef with the reference retured by badSetHour
    unsigned int& hourRef = t.badSetHour(20); //20 is a valid hour
    cout << "Valid hour before modification: " << hourRef;
    hourRef = 30; //modifies the private data member hour in object t
    cout << "\nInvalid hour after modification: " << t.getHour();

    //Dangerous: Function call that returns
    //a reference can be used as an lvalue
    t.badSetHour(12) = 74; //set invalid value in private member hour
    cout <<"\n\n**********************************\n\n"
    <<"POOR PROGRAMMING PRACTICE!!!!!\n"
    << "t.badSetHour(12) as an lvalue: " << t.getHour() << endl;
    return 0;
}