#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

class Solution {
public:
    std::vector<int> twoSumBruteforce(std::vector<int>& nums, int target);
    std::vector<int> twoSumHashTable(std::vector<int>& nums, int target);
};

#endif
