#include "Composition.h"

void Point::setPoint(const int x, const int y)
{
    this->x = x;
    this->y = y;
}

void Creature::setCreature(const std::string& name, const Point& location)
{
    this->name = name;
    this->location = location;
}

void Creature::move(int x, int y)
{
    this->location.setPoint(x, y);
}

