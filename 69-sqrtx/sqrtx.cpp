class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        long long low = 1, high = x, ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid * mid <= x) {
                ans = mid;        // store valid result
                low = mid + 1;    // try for larger value
            } else {
                high = mid - 1;   // reduce search space
            }
        }
        return ans;
    }
};
