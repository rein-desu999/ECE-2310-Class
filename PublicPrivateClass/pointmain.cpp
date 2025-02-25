#include "Point.h"
#include <iostream>

using namespace std;

int main(){
    Point p1(1, 2);
    Point p2(3, 4);
    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;
    cout << "Is Point 1 leftmost? " << p1.IsLeftMost(p2) << endl;
    p1.movePoint(1, 1);
    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    return 0;
}