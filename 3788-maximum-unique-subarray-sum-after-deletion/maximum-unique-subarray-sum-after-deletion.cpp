class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> seen;
        int sum = 0;
        bool hasNonNegative = false;
        int maxNegative = INT_MIN;

        for (int num : nums) {
            if (num >= 0) {
                hasNonNegative = true;
                if (seen.find(num) == seen.end()) {
                    sum += num;
                    seen.insert(num);
                }
            } else {
                maxNegative = max(maxNegative, num);
            }
        }

        if (hasNonNegative) {
            return sum;
        } else {
            return maxNegative;
        }
    }
};
