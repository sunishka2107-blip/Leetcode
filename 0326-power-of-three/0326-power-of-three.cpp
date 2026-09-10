class Solution {
public:
    bool isPowerOfThree(int n) {
        int a = n;
        if (a <= 0) {
            return false;
        }
        if (a == 1) {
            return true;
        }
        while (a > 1) {
            if (a % 3 == 0) {
                a = a / 3;
            } else {
                return false;
            }
        }
        return true ; 
        
    }
};