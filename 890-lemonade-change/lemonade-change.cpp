#include <vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0; // counters for $5 and $10 bills
        
        for (int bill : bills) {
            if (bill == 5) {
                five++;
            } 
            else if (bill == 10) {
                if (five == 0) return false; // cannot give change
                five--;
                ten++;
            } 
            else { // bill == 20
                if (ten > 0 && five > 0) { // give one $10 and one $5
                    ten--;
                    five--;
                } 
                else if (five >= 3) { // give three $5
                    five -= 3;
                } 
                else {
                    return false; // cannot give change
                }
            }
        }
        return true;
    }
};
