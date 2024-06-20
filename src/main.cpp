#include <iostream>
#include <vector>
#include "twoSum.h"

int main() {
    Solution solution;
    std::vector<int> nums = {2, 7, 11, 15};
    //int target = 9;
    std::vector<int> result = solution.twoSum(nums, 9);

    if (!result.empty()) {
        std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
