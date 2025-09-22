class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxFreq = 0;

        // Count frequencies
        for (int num : nums) {
            freq[num]++;
            maxFreq = max(maxFreq, freq[num]);
        }

        int result = 0;
        // Count how many numbers have this maximum frequency
        for (auto& [num, count] : freq) {
            if (count == maxFreq) {
                result += count;
            }
        }

        return result;
    }
};
