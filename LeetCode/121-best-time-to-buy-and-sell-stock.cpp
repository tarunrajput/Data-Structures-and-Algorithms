#include <iostream>
#include <vector>
#include<limits.h>

using namespace std;

// brute force approach
int maxProfitBruteForce(vector<int> &prices) {
    int n = prices.size();
    int profit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (prices[i] < prices[j]) {
                profit = max(profit, prices[j] - prices[i]);
            }
        }
    }
    return profit;
}

int maxProfit(vector<int> &prices) {
    int maxProfit = 0;
    int minPrice = INT_MAX;

    int n = prices.size();

    for (int i = 0; i < n; i++) {
        if (prices[i] < minPrice)
            minPrice = prices[i];
        else if (prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;
    }
    return maxProfit;
}

int main(int argc, char const *argv[]) {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
    return 0;
}
