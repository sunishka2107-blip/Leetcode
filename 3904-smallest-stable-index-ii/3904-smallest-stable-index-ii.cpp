class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector <int> v1(n);
        vector <int> v2(n);
        v1[0]=nums[0];
        v2[n-1]=nums[n-1];
        for(int i=1; i<n; i++){
            v1[i] = max(nums[i],v1[i-1]);
        }
        for(int i=n-2; i>=0; i--){
            v2[i] = min(nums[i],v2[i+1]);
        }
        for (int i=0; i<n; i++){
            if (v1[i]-v2[i]<=k) return i;
        }
        return -1;
    }
};