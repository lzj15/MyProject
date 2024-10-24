#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

class Circle
{
private:
    Point Center;
    int radius;

public:
    void setCenterCoors();
    int getCenterXCoor();
    int getCenterYCoor();

    void setRadius();
    int getRadius();
};