#include "isPalindrome.h"
#include <string>

bool c::isPal(std::string s) {

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        //Move left pointer to the right while it's not pointing to an alphanumeric character
        while (left < right && !std::isalnum(s[left])) {
            left++;
        }

        // Move right pointer to the left while it's not pointing to an alphanumeric character
        while (left < right && !std::isalnum(s[right])) {
            right--;
        }

        // Compare the characters at left and right pointers after converting them to lowercase
        if (std::tolower(s[left]) != std::tolower(s[right])) {
            return false; // Not a palindrome
        }

        // Move both pointers towards the center
        left++;
        right--;
    }

    return true; // It's a palindrome
}