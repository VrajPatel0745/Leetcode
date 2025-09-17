class Solution {
public:
    void swap(int &a,int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }

    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = nums.size() - 1;

        while (i <= j) {
            if (nums[i] == val) {
                swap(nums[i], nums[j]);
                j--; 
            } else {
                i++; 
            }
        }
        return j + 1; 
    }
};
