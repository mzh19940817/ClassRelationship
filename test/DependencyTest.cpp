#include "Dependency.h"
#include "gtest/gtest.h"

struct DependencyTest : testing::Test
{

};

TEST_F(DependencyTest, should_be_true_when_give_x_y)
{
    Point2D point{1, 2};
    ASSERT_EQ(1, point.getX());
    ASSERT_EQ(2, point.getY());
}

