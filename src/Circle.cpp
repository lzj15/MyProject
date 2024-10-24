#include "Circle.h"

    void Circle::setCenterCoors() {
        Center.setCoors();
    }

    int Circle::getCenterXCoor() {
        return Center.getXCoor();
    }
    int Circle::getCenterYCoor() {
        return Center.getYCoor();
    }
    void Circle::setRadius() {
        cin >> radius;
    }
    int Circle::getRadius() {
        return radius;
    }