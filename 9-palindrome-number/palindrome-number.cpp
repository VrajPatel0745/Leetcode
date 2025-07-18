class Solution {
public:
    bool isPalindrome(int x) {
        int v=x;
        int a;
        long long sum=0;
        while(x>0)
        {
            a=x%10;
            sum=sum*10+a;
            x=x/10;
        }
        if(v==sum) return true;
        else{ return false;}
        return false;
    }
};