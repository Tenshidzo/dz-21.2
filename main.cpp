#include "Point.h"
int main() {
    Point point;
    point.input();
    point.output();
    point.saveToFile("point_data.txt");
    Point loadedPoint;
    loadedPoint.loadFromFile("point_data.txt");
    loadedPoint.output();

    return 0;
}