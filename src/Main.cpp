#include "Point.h"
#include "Circle.h"

void isInCircle(Point p, Circle c) {
    int radSqr = c.getRadius() * c.getRadius();

    int distanceX = p.getXCoor() - c.getCenterXCoor();
    int distanceY = p.getYCoor() - c.getCenterYCoor();
    int distanceSqr = distanceX * distanceX + distanceY * distanceY;

    if (radSqr > distanceSqr) {
        cout << "Point is in circle";
    }
    else if (radSqr < distanceSqr) {
        cout << "Point is not in circle";
    }
    else {
        cout << "Point is on the circle";
    }

}

int main() {

    Point MyPoint;
    cout << "Enter X and Y coordinates of the point:" << endl;
    MyPoint.setCoors();

    Circle MyCircle;
    cout << "Enter X and Y coordinates of the center:" << endl;
    MyCircle.setCenterCoors();
    cout << "Enter the radius of circle:";
    MyCircle.setRadius();

    isInCircle(MyPoint, MyCircle);
    cout << endl;

    return 0;
}