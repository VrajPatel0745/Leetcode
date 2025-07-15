class Solution {
public:
bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
    bool isValid(string word) {
        if(word.length()<=2) return false;
        bool hasVowel = false;
    bool hasConsonant = false;

    for (char ch : word) {
        if (!isalnum(ch)) {
            // Contains non-alphanumeric character
            return false;
        }

        if (isalpha(ch)) {
            if (isVowel(ch)) {
                hasVowel = true;
            } else {
                hasConsonant = true;
            }
        }
        // Digits are allowed, but do not count as vowel or consonant
    }

    return hasVowel && hasConsonant;
    }
};