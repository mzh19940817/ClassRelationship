#include "Dependency.h"

std::ostream& operator<<(std::ostream& os, const Point2D& point)
{
    os << "Point(" << point.x << ", " << point.y <<")";

    return os;
}

