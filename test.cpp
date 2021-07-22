#include "pch.h"
#include "../Nokia1.1/findInVector.h"
#include "../Nokia1.1/findInVector.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

class FindInVectorTest : public ::testing::Test
{
protected:

    std::vector<int> vec;
    std::vector<std::string> vec_of_str;

    FindInVectorTest() 
    {
        vec = { 1, 2, 3 };
        vec_of_str = { "Hello", "Nokia", "World"};
    };
    ~FindInVectorTest() override {};

    void SetUp() override {};
    void TearDown() override {};
};

TEST_F(FindInVectorTest, CheckFirstPositionInt)
{
    EXPECT_EQ(utils::findInVector(vec, 1), 0);
}

TEST_F(FindInVectorTest, CheckSecondPositionInt)
{
    EXPECT_EQ(utils::findInVector(vec, 2), 1);
}

TEST_F(FindInVectorTest, CheckFirstPositionString)
{
    std::string input = "Nokia";

    EXPECT_EQ(utils::findInVector(vec_of_str, input), 1);
}

TEST_F(FindInVectorTest, CheckForNonExistingElement)
{
    EXPECT_NE(utils::findInVector(vec, -1), 0);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}