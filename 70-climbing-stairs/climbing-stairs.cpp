#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);  // memoization table
        return helper(n, dp);
    }

private:
    int helper(int n, vector<int>& dp) {
        if (n == 1) return 1;   // only 1 way
        if (n == 2) return 2;   // two ways

        if (dp[n] != -1) return dp[n];  // already computed

        // recursive relation: ways(n) = ways(n-1) + ways(n-2)
        dp[n] = helper(n - 1, dp) + helper(n - 2, dp);
        return dp[n];
    }
};