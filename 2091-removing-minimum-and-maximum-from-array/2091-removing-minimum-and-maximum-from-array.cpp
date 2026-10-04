class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int smallest = INT_MAX;
        int largest = INT_MIN;
        int minPos = 0;
        int maxPos = 0;
        int mid = n / 2;
        for (int i = 0; i < n; i++) {
            if (nums[i] > largest) {
                largest = nums[i];
                maxPos = i;
            }
            if (nums[i] < smallest) {
                smallest = nums[i];
                minPos = i;
            }
        }
        int minPosBack = 0;
        int maxPosBack = 0;
        minPosBack = n - minPos;
        maxPosBack = n - maxPos;

        int ans;
        if (minPos <= mid && maxPos <= mid) {
            ans = max(minPos, maxPos) + 1;
        } else if (minPos > mid && maxPos > mid) {
            ans = max(minPosBack, maxPosBack);
        }

        else {
            int a = minPos + 1 + maxPosBack;
            int b = maxPos + 1 + minPosBack;
            int c = max(minPosBack, maxPosBack);
            int d = max(minPos, maxPos) + 1;
            ans = min(min(a, b), min(c, d));
        }

        return ans;
    }
};