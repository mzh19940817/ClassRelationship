#include "Realization.h"
#include <memory>
#include "gtest/gtest.h"

struct RealizationTest : testing::Test
{

};

TEST_F(RealizationTest, should_be_true_when_give_animal)
{
    std::unique_ptr<Animal> dog{new Dog};
    ASSERT_EQ("run", dog->move());

    std::unique_ptr<Animal> bird{new Bird};
    ASSERT_EQ("fly", bird->move());
}
