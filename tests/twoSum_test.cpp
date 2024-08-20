#include "twoSum.h"
#include <gtest/gtest.h>
#include <vector>


TEST(TwoSumTest, HandlesCorrectInput) {
    Solution solution;
    std::vector<int> input = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> output = {0, 1};
    EXPECT_EQ(solution.twoSum(input, target), output);
}

TEST(TwoSumTest, HandlesCorrectInput2) {
    Solution solution;
    std::vector<int> input = {3, 2, 4};
    int target = 6;
    std::vector<int> output = {1, 2};
    EXPECT_EQ(solution.twoSum(input, target), output);
}

TEST(TwoSumTest, HandlesCorrectInput3) {
    Solution solution;
    std::vector<int> input = {3, 3};
    int target = 6;
    std::vector<int> output = {0, 1};
    EXPECT_EQ(solution.twoSum(input, target), output);
}
