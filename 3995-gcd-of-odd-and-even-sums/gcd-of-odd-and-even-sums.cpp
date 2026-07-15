class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0)
            return a;

        return gcd(b, a % b);
    }

    int gcdOfOddEvenSums(int n) {

        int even_sum = 0;
        int odd_sum = 0;

        for (int i = 1; i <= n; i++) {
            even_sum += 2 * i;
            odd_sum += (2 * i - 1);
        }

        return gcd(even_sum, odd_sum);
    }
};