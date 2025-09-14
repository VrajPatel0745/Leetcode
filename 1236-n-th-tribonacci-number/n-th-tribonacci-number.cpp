class Solution {
public:
    int tribonacci(int n) {
        vector<int> dp(n+1, -1); // size n+1 for indexing up to n
        return fib(n, dp);
    }

    int fib(int n, vector<int>& dp) {
        if (dp[n] != -1) return dp[n];  // already computed

        if (n == 0) return dp[n] = 0;
        if (n == 1 || n == 2) return dp[n] = 1;

        dp[n] = fib(n - 1, dp) + fib(n - 2, dp) + fib(n - 3, dp);
        return dp[n];
    }
};
