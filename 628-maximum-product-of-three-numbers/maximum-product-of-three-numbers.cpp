class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        
        // Handle small cases
        if (n == 3) {
            return nums[0] * nums[1] * nums[2];
        }
        
        // Track three largest and two smallest numbers
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;     // largest three
        int min1 = INT_MAX, min2 = INT_MAX;                     // smallest two
        
        for (int num : nums) {
            // Update three largest
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            } 
            else if (num > max2) {
                max3 = max2;
                max2 = num;
            } 
            else if (num > max3) {
                max3 = num;
            }
            
            // Update two smallest
            if (num < min1) {
                min2 = min1;
                min1 = num;
            } 
            else if (num < min2) {
                min2 = num;
            }
        }
        
        // Two possibilities for max product:
        // 1. Three largest positives
        // 2. Two smallest negatives + largest positive
        return max(max1 * max2 * max3, max1 * min1 * min2);
    }
};