class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;

        for(int i = l; i <= r; i++) {
            int sum = 0;

            for(int j = 0; j < i; j++) {
                sum += nums[j];
            }

            if(sum > 0)
                ans = min(ans, sum);

            for(int j = i; j < n; j++) {
                sum = sum - nums[j-i] + nums[j];

                if(sum > 0) {
                    ans = min(ans, sum);
                }
            }
        }

        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};