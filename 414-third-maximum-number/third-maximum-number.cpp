class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;

        for (int x : nums) {
            s.insert(x);

            if (s.size() > 3) {
                s.erase(s.begin()); // Remove smallest element
            }
        }

        if (s.size() == 3) {
            return *s.begin();      // Third maximum
        }

        return *s.rbegin();         // Maximum element
    }
};