#include "Generalization.h"
#include "gtest/gtest.h"

struct GeneralizationTest : testing::Test
{

};

TEST_F(GeneralizationTest, should_be_true_when_give_student)
{
    Student stu{"Jack", 1025};
    ASSERT_EQ("Jack", stu.getName());
    ASSERT_EQ(1025, stu.getNumber());
}

