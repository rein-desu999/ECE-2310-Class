/*
    Classes is a blueprint for creating objects
    Functions in a class are called member functions
    Variables in a class are called member variables
    Member functions and member variables are called members of the class
    Objects are instances of a class
    Objects have member variables and member functions
    Objects are created from a class
*/
/*
    Time Class Case Study
        Prior class definition examples placed a class in a header for reuse, then included the header in a main program.
    
    Client code only need to:
        what member functions to call
        what arguments to pass
        what return values to expect
*/
/*
    Interface of a Class
        Interface define and standardize the way in which things such as people and systems interact with one another
            Ex: a radio interface includes buttons, dials, and a display

        A class's public interface consists of its public member functions and public member variables
        We can specify  class interface by:
            Writing a class definition
            Writing a class implementation
            Writing a client program that uses the class

        *To seperate the class interface from its implementation, we can:
            Write the class definition in a header file
            Write the class implementation in a source file
            Include the header file in the client program

            Benifits:
                Clients can use the class without knowing how it is implemented
                The class can be changed without affecting clients
                The class can be reused in other programs
        By convention, member function declarations are placed in the class definition, and member function definitions are placed in the class implementation

    Ex:
    //Member funct are define in Time.cpp
    #include <String>
    using namespace std;

    #ifndef TIME_H
    #define TIME_H
    class Time{
        public:
            Time();
            void setTime(int, int, int);
            toUniversalString() const; //24-hour time format
            toString() const; //12-hour time format 
        private:
            unsigned int hour(0);
            unsigned int minute(0);
            unsigned int second(0);
    };

    #endif

    **
        #ifndef: is a preprocessor directive that checks whether TIME_H has been defined
        #define: defines TIME_H if it has not been defined
        #endif: marks the end of the code that is included in the program
    **


    Ex: Time.cpp
    #include <iostream>
    #include <iomanip> //parameterized stream manipulators
    #include "Time.h"
    #include <string> 
    #include <sstream> //for ostringstream

    using namespace std;

    /set new Time value using universal time/
    void Time::setTime(int h, int m, int s){
        if(h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60){
            hour = h;
            minute = m;
            second = s;
        }
        else{
            throw invalid_argument("hour, minute, and/or second was out of range");
        }      
    }

    //return Time as a string in universal-time format (HH:MM:SS)
    string Time::toUniversalString() const{
        ostringstream output;
        output << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
        return output.str(); //return formatted string
    }

    //return Time as a string in standard-time format (HH:MM:SS AM or PM)
    string Time::toString() const{
        ostringstream output;
        output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
        return output.str(); //return formatted string
    }

        **
            "ties" the member function definitions to the class
            Time:: tells the compiler that the member function is part of the Time class and its name is known to other class members
            Without Time::, the compiler would not know that the member function definitions are for the Time class
                Instead, the compiler would think that the member function definitions are for a global function
                Such function cannot access the class's private members
            Fucntion setTime tests the validity of the arguments and throws an exception if they are invalid
            toUniversalString and toString return a string representation of the Time object with 3 colons seperate pairs and digits
                toUniversalString and toStandardString take no arguments and return a string
            ostringstream (<sstream>) is used to build the string representation, same as cout but write format into string

            Parameterized stream manipulators:
                setfill('0') sets the fill character to '0'
                setw(2) sets the width of the next output field to 2 characters
                If the num being output fills the specified field, the fill character is not used

            Once fill character is specified with setfill, it remains in effect until it is changed
            Contrast to setw, which applies only to the next output field
                setfill is sticky setting
                setw is not sticky setting
            
            toStandardString uses the conditional operator to determine whether the hour is 0 or 12
                If so, it outputs 12; otherwise, it outputs hour % 12
                The conditional operator is used to output AM or PM based on whether the hour is less than 12

            If a member function is defined in the class body, the complier attempts to incline calls to the member function
        **

    To run classes files:
        g++ -o Lab3 Lab3.cpp Person.h Person.cpp
        ./Lab3
*/


/*
    Class Time:
        Time sunset; //object of type Time
        array<Time, 5> times; //array of 5 Time objects
        Time* timePtr = nullptr; //pointer to a Time object
        Time* timePtr = new Time; //dynamically allocated Time object
        Time* timePtr = new Time[5]; //dynamically allocated array of 5 Time objects
        Time* timePtr = &sunset; //pointer to a Time object
        Time* timePtr = times.data(); //pointer to the first element of the array times

*/