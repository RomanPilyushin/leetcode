#include "twoSum.h"
#include <gtest/gtest.h>
#include <vector>

TEST(TwoSumTest, HandlesCorrectInput) {
    Solution solution;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> expected = {0, 1};
    EXPECT_EQ(solution.twoSum(nums, target), expected);
}

TEST(TwoSumTest, HandlesNoSolution) {
    Solution solution;
    std::vector<int> nums = {1, 2, 3, 4};
    int target = 10;
    std::vector<int> expected = {};
    EXPECT_EQ(solution.twoSum(nums, target), expected);
}
