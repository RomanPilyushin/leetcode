#include "isPalindrome.h"
#include <gtest/gtest.h>

TEST(isPalindromeTest, HandlesCorrectInput1) {
    isPalindrome solution;
    std::string input = "race a car";
    bool output = false;
    EXPECT_EQ(solution.isPal(input), output);
}

TEST(isPalindromeTest, HandlesCorrectInput2) {
    isPalindrome solution;
    std::string input = "A man, a plan, a canal: Panama";
    bool output = true;
    EXPECT_EQ(solution.isPal(input), output);
}