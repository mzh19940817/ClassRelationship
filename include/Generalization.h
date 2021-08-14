#ifndef GENERALIZATION_H_
#define GENERALIZATION_H_

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

struct Student : Person
{
    Student(const std::string& name, const int number)
            : Person(name), number(number) { }

    const int getNumber() const
    {
        return this->number;
    }

private:
    int number;
};

#endif /* GENERALIZATION_H_ */
