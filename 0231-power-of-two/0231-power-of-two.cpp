class Solution {
public:
    bool isPowerOfTwo(int n) {
        int a = n;
        if (a <= 0) {
            return false;
        }
        if (a == 1) {
            return true;
        }
        while (a > 1) {
            if (a % 2 == 0) {
                a = a / 2;
            } else {
                return false;
            }
        }
        return true ; 
    }
};
