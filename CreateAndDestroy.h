#include <string>
#include <iostream>
using namespace std;

#ifndef CREATEANDDESTROYER_H
#define CREATEANDDESTROYER_H

class CreateAndDestroyer{
    public:
        CreateAndDestroyer(int ID, string message);
        ~CreateAndDestroyer();
    private:
        int objectID;
        string message;
};

#endif