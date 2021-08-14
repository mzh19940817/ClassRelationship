#ifndef DEPENDENCY_H_
#define DEPENDENCY_H_

#include <iostream>

struct Point2D
{
    Point2D(int x, int y) : x(x), y(y) { }

    int getX() const
    {
        return this->x;
    }
    int getY() const
    {
        return this->y;
    }

    friend std::ostream& operator<<(std::ostream& os, const Point2D& point);

private:
    int x;
    int y;
};

#endif /* DEPENDENCY_H_ */
