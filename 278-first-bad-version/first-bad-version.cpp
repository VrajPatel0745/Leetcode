class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;

        while(left < right)
        {
            int mid = left + (right - left) / 2;

            if(isBadVersion(mid))
            {
                right = mid;     // first bad is on left side
            }
            else
            {
                left = mid + 1;  // first bad is on right side
            }
        }

        return left;
    }
};