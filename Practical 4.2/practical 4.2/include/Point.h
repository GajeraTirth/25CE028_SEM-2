#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x;
    int y;

public:
    Point(int xVal = 0, int yVal = 0);
    Point& move(int dx, int dy);
    void display() const;
};

void updatePoint(Point* p, int dx, int dy);

#endif
