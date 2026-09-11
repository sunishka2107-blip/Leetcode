class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> v1 (n) ; 
        v1[0] = nums[0] ; 
        for(int i= 1 ; i<n ; i++){
            v1[i] = v1[i-1]+nums[i] ; 
        }
        return v1 ; 
        
    }
};