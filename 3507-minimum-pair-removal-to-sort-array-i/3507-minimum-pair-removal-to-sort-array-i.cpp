class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;
         while (true) {
            
            if (is_sorted(nums.begin(), nums.end())) {
                break;
            }
            
            int n = nums.size();
            int small = INT_MAX;
            int y = 1;
            for (int j = 1; j < n; j++) {
                int sum = nums[j - 1] + nums[j];
                if (sum < small) {
                    small = sum;
                    y = j;
                }
            }
            nums[y - 1] = small;
            nums.erase(nums.begin() + y);
            count++;

        }
        return count;
    }
};