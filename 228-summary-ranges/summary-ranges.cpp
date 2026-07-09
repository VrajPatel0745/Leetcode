class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;

        if (nums.size() == 0)
            return result;

        int curr = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1] + 1) {
                if (curr == i - 1)
                    result.push_back(to_string(nums[curr]));
                else
                    result.push_back(to_string(nums[curr]) + "->" +
                                     to_string(nums[i - 1]));

                curr = i;
            }
        }

        // Add the last range
        if (curr == nums.size() - 1)
            result.push_back(to_string(nums[curr]));
        else
            result.push_back(to_string(nums[curr]) + "->" +
                             to_string(nums[nums.size() - 1]));

        return result;
    }
};