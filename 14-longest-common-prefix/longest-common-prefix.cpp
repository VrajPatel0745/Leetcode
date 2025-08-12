class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0]; // Start with the first string
        for (int i = 1; i < strs.size(); i++) {
            // Reduce prefix until it matches the start of strs[i]
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};