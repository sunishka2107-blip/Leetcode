class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n=nums.size() ;
        if(n==0 || n==1){
            return -1 ; 
        } 
        for(int i=0 ; i<n-1 ; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        } 
        return -1;
    }
};