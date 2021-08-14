#include "Composition.h"
#include "gtest/gtest.h"

struct CompositionTest : testing::Test
{
    void SetUp() override
    {
        Point point;
        creature.setCreature(this->name, point);
    }

    void assertCreature(const int x, const int y)
    {
        ASSERT_EQ(this->name, this->creature.getName());
        ASSERT_EQ(x, this->creature.getXLocation());
        ASSERT_EQ(y, this->creature.getYLocation());
    }

protected:
    Creature creature;
    std::string name{"dog"};
};

TEST_F(CompositionTest, should_be_ture_location_when_move_to_x1_y2)
{
    int x = 1;
    int y = 2;
    creature.move(x, y);
    assertCreature(x, y);
}

