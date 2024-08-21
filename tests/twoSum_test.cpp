#include "twoSum.h"
#include <gtest/gtest.h>
#include <vector>

//Brute Force
TEST(TwoSumTest, HandlesCorrectInput1) {
    Solution solution;
    std::vector<int> input = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> output = {0, 1};
    EXPECT_EQ(solution.twoSumBruteforce(input, target), output);
}

TEST(TwoSumTest, HandlesCorrectInput2) {
    Solution solution;
    std::vector<int> input = {3, 2, 4};
    int target = 6;
    std::vector<int> output = {1, 2};
    EXPECT_EQ(solution.twoSumBruteforce(input, target), output);
}

TEST(TwoSumTest, HandlesCorrectInput3) {
    Solution solution;
    std::vector<int> input = {3, 3};
    int target = 6;
    std::vector<int> output = {0, 1};
    EXPECT_EQ(solution.twoSumBruteforce(input, target), output);
}


//Hash Table
TEST(TwoSumTest, HandlesCorrectInput4) {
    Solution solution;
    std::vector<int> input = {2, 11, 15, 7};
    int target = 9;
    std::vector<int> output = {0, 3};
    EXPECT_EQ(solution.twoSumHashTable(input, target), output);
}

TEST(TwoSumTest, HandlesCorrectInput5) {
    Solution solution;
    std::vector<int> input = {3, 2, 4};
    int target = 6;
    std::vector<int> output = {1, 2};
    EXPECT_EQ(solution.twoSumHashTable(input, target), output);
}

TEST(TwoSumTest, HandlesCorrectInput6) {
    Solution solution;
    std::vector<int> input = {3, 3};
    int target = 6;
    std::vector<int> output = {0, 1};
    EXPECT_EQ(solution.twoSumHashTable(input, target), output);
}