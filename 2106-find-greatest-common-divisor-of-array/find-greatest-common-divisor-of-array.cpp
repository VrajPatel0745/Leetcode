class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=nums[0];
        int min=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
            if(nums[i]<min)
            {
                min=nums[i];
            }
        }
        return __gcd(max,min);
    }
};