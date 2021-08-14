#ifndef AGGREGATION_H_
#define AGGREGATION_H_

#include <string>

struct Person
{
    Person(const std::string& name) : name(name) { }

    const std::string& getName() const
    {
        return this->name;
    }

private:
    std::string name;
};

struct House
{
    House(const Person& person) : person(person) { }

    const std::string getPerson() const;

private:
    const Person& person;
};

#endif /* AGGREGATION_H_ */
