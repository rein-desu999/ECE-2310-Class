#ifndef Point_H
#define Point_H
#include <string>
#include <iostream>

using namespace std;

class Point{
    public:
    /*          Construction        */
        Point();
        Point(double x, double y);
        
    /*          Mutator         */
        void movePoint(double dx, double dy);
        bool IsLeftMost(Point q);

    /*          Accessor        */
        double getX() const;
        double getY() const;

    private:
        double x;
        double y;
};
#endif