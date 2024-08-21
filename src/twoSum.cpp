#include "twoSum.h"

#include <unordered_map>
#include <vector>

//https://leetcode.com/problems/two-sum/description/

std::vector<int> Solution::twoSumBruteforce(std::vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {}; // No solution found
}

std::vector<int> Solution::twoSumHashTable(std::vector<int>& vectorOfNumbers, int target) {
    std::unordered_map<int, int> hashtable; // Hash table to store number and its index
    for (int i = 0; i < vectorOfNumbers.size(); i++) {
        int complement = target - vectorOfNumbers[i]; // The number needed to reach the target
        if (hashtable.find(complement) != hashtable.end()) {
            // If complement is found, return its index and the current index
            return {hashtable[complement], i};
        }
        hashtable[vectorOfNumbers[i]] = i; // Store the index of the current number
    }
    return {}; // No solution found
}