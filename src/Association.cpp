#include "Association.h"

void Doctor::addPatient(Patient& patient)
{
    this->patient.push_back(patient);

    patient.addDoctor(*this);
}

