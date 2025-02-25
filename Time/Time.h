#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;

class Time{
    public:
        void setTime(int, int, int);
        unsigned int getHour() const;
        unsigned int& badSetHour(int); //dangerous reference return
    private:
        unsigned int hour{0};
        unsigned int minute{0};
        unsigned int second{0};
};
#endif