class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool inWord = false;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                length++;
                inWord = true;
            } else if (inWord) {
                break;
            }
        }

        return length;
    }
};
