#include "validParentheses.h"
#include <gtest/gtest.h>

TEST(ValidParenthesesTest, HandlesCorrectInput1) {
    validParentheses solution;
    std::string s = "()";
    EXPECT_EQ(solution.isValid(s), true);
}

TEST(ValidParenthesesTest, HandlesCorrectInput2) {
    validParentheses solution;
    std::string s = "()[]{}";
    EXPECT_EQ(solution.isValid(s), true);
}

TEST(ValidParenthesesTest, HandlesCorrectInput3) {
    validParentheses solution;
    std::string s = "(]";
    EXPECT_EQ(solution.isValid(s), false);
}