class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        int maximum = INT_MIN ;
        for(int i=0 ; i<n ; i++){
            maximum = max(nums[i],maximum);
        }
        int sum = 0 ; 
        for(int i=0 ; i<k ; i++){
            sum = sum+maximum ; 
            maximum ++ ; 
        }
    return sum ; 
        
    }
};