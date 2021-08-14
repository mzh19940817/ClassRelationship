#ifndef REALIZATION_H_
#define REALIZATION_H_

#include <iostream>

struct Animal
{
    virtual ~Animal() {}

    virtual std::string move() const = 0;
};

struct Dog : Animal
{
    std::string move() const override
    {
        return "run";
    }
};

struct Bird : Animal
{
    std::string move() const override
    {
        return "fly";
    }
};

#endif /* REALIZATION_H_ */
