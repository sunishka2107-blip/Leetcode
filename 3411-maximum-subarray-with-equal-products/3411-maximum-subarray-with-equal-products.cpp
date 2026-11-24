class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            if (nums[0] == 1) {
                return 1;
            } else {
                return 0;
            }
        }
        if (n == 2) {
            return 2;
        }
        int maxx = 2;
        for (int i = 0; i < n-2; i++) {
            if(gcd(nums[i] , nums[i+1]) == 1){
            for (int j = i + 2; j < n; j++) {
                int k;
                for (k = i; k < j; k++) {
                    int a = gcd(nums[k], nums[j]);

                    if (a != 1) {
                        break;
                    }
                }
                if (k == j) {
                    maxx = max(maxx, j - i + 1);
                } else {
                    break;
                }
            }
            }
        }
        return maxx;
    }
};