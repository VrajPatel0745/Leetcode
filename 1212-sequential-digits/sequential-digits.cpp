class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string input = "123456789";
        vector<int>result;
        for (int i = 2; i <= 9; i++) {
            for (int j = 0; j + i <= 9; j++) {
                int num = stoi(input.substr(j, i));
                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }
        return  result;
    }
};