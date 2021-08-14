#include "Aggregation.h"
#include "gtest/gtest.h"

struct AggregationTest : testing::Test
{

};

TEST_F(AggregationTest, should_be_true_when_assert_person_name)
{
    std::string name{"Jack"};
    Person person{name};
    House house{person};
    ASSERT_EQ(name, house.getPerson());
}

