#include "bestTime.h"
#include <gtest/gtest.h>
#include <vector>

TEST(BestTimeTest, HandlesCorrectInput1) {
    bestTime solution;
    std::vector<int> input = {7,1,5,3,6,4};
    int output = 5;
    EXPECT_EQ(solution.maxProfit(input), output);
}

TEST(BestTimeTest, HandlesCorrectInput2) {
    bestTime solution;
    std::vector<int> input = {7,6,4,3,1};
    int output = 0;
    EXPECT_EQ(solution.maxProfit(input), output);
}

//Consice
TEST(BestTimeTest, HandlesCorrectInput3) {
    bestTime solution;
    std::vector<int> input = {7,1,5,3,6,4};
    int output = 5;
    EXPECT_EQ(solution.maxProfitConcise(input), output);
}

TEST(BestTimeTest, HandlesCorrectInput4) {
    bestTime solution;
    std::vector<int> input = {7,6,4,3,1};
    int output = 0;
    EXPECT_EQ(solution.maxProfitConcise(input), output);
}