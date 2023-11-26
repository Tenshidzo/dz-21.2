#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Point {
private:
    double x, y, z;

public:
    Point();
    Point(double x, double y, double z);
    void input();
    void output() const;

    double getX() const;
    double getY() const;
    double getZ() const;

    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    void saveToFile(const std::string& filename) const;

    void loadFromFile(const std::string& filename);
};
