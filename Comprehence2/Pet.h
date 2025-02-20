#ifndef PET_H
#define PET_H
#include <iostream>
#include <string>

using namespace std;
class Pet{
    
    public:
        Pet();
        Pet(string name, int age, string owner, bool isHouseTrained);

        string getname() const;
        int getage() const;
        string getowner() const;
        bool getisHouseTrained() const;

        void updateName(string new_name);
        void updateAge();
        void updateOwner(string adopter);
        void updateHouseTrained();

    private:
        string name;
        int age;
        string owner;
        bool isHouseTrained;
};
#endif