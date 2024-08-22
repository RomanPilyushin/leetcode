#include "validParentheses.h"
#include <gtest/gtest.h>

TEST(TwoSumTest, HandlesCorrectInput1) {
    validParentheses solution;
    std::string s = "()";
    EXPECT_EQ(solution.isValid(s), true);
}

TEST(TwoSumTest, HandlesCorrectInput2) {
    validParentheses solution;
    std::string s = "()[]{}";
    EXPECT_EQ(solution.isValid(s), true);
}

TEST(TwoSumTest, HandlesCorrectInput3) {
    validParentheses solution;
    std::string s = "(]";
    EXPECT_EQ(solution.isValid(s), false);
}