class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> vowelFreq;
        map<char, int> consFreq;
        string vowels = "aeiouAEIOU";
        for (char ch : s) {
            if (isalpha(ch)) { // only letters
                if (vowels.find(ch) != string::npos) {
                    vowelFreq[ch]++;
                } else {
                    consFreq[ch]++;
                }
            }
        }
        int maxVowel = 0, maxCons = 0;

        for (auto &p : vowelFreq) {
            maxVowel = max(maxVowel, p.second);
        }
        for (auto &p : consFreq) {
            maxCons = max(maxCons, p.second);
        }
        return maxVowel+maxCons;
    }
};    
