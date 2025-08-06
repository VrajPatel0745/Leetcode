class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.size() <= numRows) return s;

        vector<string> R(numRows);
        int row = 0;
        bool isDown = true;

        for(char c : s) {
            R[row] += c;

            if(row == 0)
                isDown = true;
            else if(row == numRows - 1)
                isDown = false;

            row += isDown ? 1 : -1;
        }

        string result;
        for(const string& str : R)
            result += str;

        return result;
    }
};
