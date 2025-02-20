#include "Point.h"

double Point::getX() const{
    return x;
}
double Point::getY() const{
    return y;
}
Point::Point(double x, double y){
    this->x = x;
    this->y = y;
}
void Point::movePoint(double dx, double dy){
    this->x = x + dx;
    this->y = y + dy;
}
bool Point::IsLeftMost(Point q){
    return x < q.getX();
}
double Point::getX() const{
    return x;
}
double Point::getY() const{
    return y;
}