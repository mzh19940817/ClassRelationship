#ifndef COMPOSITION_H_
#define COMPOSITION_H_

#include <string>

struct Point
{
    Point() : x(0), y(0) { }

    void setPoint(const int x, const int y);
    int getPointX() const
    {
        return this->x;
    }
    int getPointY() const
    {
        return this->y;
    }

private:
    int x;
    int y;
};

struct Creature
{
    Creature() : name(""), location(location) { }

    void setCreature(const std::string& name, const Point& location);
    void move(int x, int y);
    std::string getName() const
    {
        return this->name;
    }
    int getXLocation() const
    {
        return this->location.getPointX();
    }
    int getYLocation() const
    {
        return this->location.getPointY();
    }

private:
    std::string name;
    Point location;
};

#endif /* COMPOSITION_H_ */
