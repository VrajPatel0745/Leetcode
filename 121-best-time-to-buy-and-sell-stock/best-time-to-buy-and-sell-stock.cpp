class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=0;
        vector<int>result(prices.size());
        for(int i=0;i<prices.size();i++)
        {
            if(min>prices[i])
            {
                 min=prices[i];
            }
            result[i]=prices[i]-min;
            if(max<result[i])
            {
                max=result[i];
            }
        }
        return max;

    }
};