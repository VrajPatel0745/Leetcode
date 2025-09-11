class Solution {
public:
    string sortVowels(string s) {
        string vowels = "aeiouAEIOU";
        unordered_set<char> vowelSet(vowels.begin(), vowels.end());

        // Step 1: collect vowels
        vector<char> vlist;
        for (char ch : s) {
            if (vowelSet.count(ch)) {
                vlist.push_back(ch);
            }
        }

        // Step 2: sort vowels by ASCII
        sort(vlist.begin(), vlist.end());

        // Step 3: rebuild string with sorted vowels
        string result = s;
        int idx = 0;
        for (int i = 0; i < s.size(); i++) {
            if (vowelSet.count(s[i])) {
                result[i] = vlist[idx++];
            }
        }

        return result;
    }
};