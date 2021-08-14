#ifndef ASSOCIATION_H_
#define ASSOCIATION_H_

#include <functional>
#include <string>
#include <vector>

struct Patient;

struct Doctor
{
    Doctor(const std::string& name) : name(name) { }

    void addPatient(Patient& patient);

    const std::string& getName() const
    {
        return this->name;
    }

    std::vector<std::reference_wrapper<const Patient>> patient;

private:
    std::string name;
};

struct Patient
{
    Patient(const std::string& name) : name(name) { }

    const std::string& getName() const
    {
        return this->name;
    }

    friend void addPatient(Patient& patient);

    void addDoctor(const Doctor& doctor)
    {
        this->doctor.push_back(doctor);
    }


    std::vector<std::reference_wrapper<const Doctor>> doctor;

private:
    std::string name;
};

#endif /* ASSOCIATION_H_ */
