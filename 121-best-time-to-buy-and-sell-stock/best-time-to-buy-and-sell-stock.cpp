class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=0;
        // vector<int>result(prices.size());
        for(int i=0;i<prices.size();i++)
        {
            if(min>prices[i])
            {
                 min=prices[i];
            }
            int  a=prices[i]-min;
            if(max<a)
            {
                max=a;
            }
        }
        return max;

    }
};