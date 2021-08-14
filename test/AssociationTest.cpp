#include "Association.h"
#include "gtest/gtest.h"

struct AssociationTest : testing::Test
{
    void SetUp() override
    {
        doctor.addPatient(patient);
    }

protected:
    Patient patient{"Jack"};
    Doctor doctor{"Lucy"};
};

TEST_F(AssociationTest, should_be_true_when_give_doctor_patient_relationship)
{
    ASSERT_EQ("Lucy", patient.doctor[0].get().getName());
    ASSERT_EQ("Jack", doctor.patient[0].get().getName());
}

