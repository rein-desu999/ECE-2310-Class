#ifndef Person_H
#define Person_H
#include <string>
#include <iostream>

using namespace std;

class Person{
    public:
    /*          Construction        */
        Person();
        Person(string name, int age, string occupation, bool lives_in_IE);
        
    /*          Mutator         */
        void updateName(string new_name);
        void updateAge(int new_age);
        void updateOccupation(string new_occupation);
        void moveLocation();

    /*          Accessor        */
        string getName();
        int getAge();
        string getOccupation();
        bool getLivesInIE();
        bool isOlderThan(Person b);

    private:
        string name;
        int age;
        string occupation;
        bool lives_in_IE;
};
#endif
