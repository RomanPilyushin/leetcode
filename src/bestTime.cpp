#include "bestTime.h"
#include <limits>
#include <vector>


int bestTime::maxProfit(std::vector<int>& prices) {

    if (prices.empty()) {
        return 0; // No profit if the array is empty
    }

    int profit = 0;
    int minPrice = prices[0];

    for (const auto& currentPrice : prices) {
        if (currentPrice < minPrice)
            minPrice = currentPrice; // Update the minimum price
        else if (currentPrice - minPrice > profit)
            profit = currentPrice - minPrice; // Update the profit
    }

    return profit;
}

//Concise
int bestTime::maxProfitConcise(std::vector<int>& prices) {

    int profit = 0;
    int minPrice = std::numeric_limits<int>::max(); // Start with the maximum possible value

    for (const auto& currentPrice : prices) {
        minPrice = std::min(minPrice, currentPrice); // Track the lowest price seen so far
        profit = std::max(profit, currentPrice - minPrice); // Track the maximum profit
    }

    return profit;
}