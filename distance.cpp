#include <iostream>
#include "point.h"
#include <cmath>

double distance(const Point& p1, const Point& p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return std::sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1, p2;

    std::cout << "Enter coordinates of first point (x y): ";
    std::cin >> p1.x >> p1.y;

    std::cout << "Enter coordinates of second point (x y): ";
    std::cin >> p2.x >> p2.y;

    double dist = distance(p1, p2);

    std::cout << "Distance between points: " << dist << std::endl;

    return 0;
}
