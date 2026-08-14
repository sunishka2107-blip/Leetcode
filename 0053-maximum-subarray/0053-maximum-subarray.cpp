class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size() ; 
        int sum = 0 ;
        int maximum = INT_MIN ;
        for (int i=0 ; i<n ; i++){
            sum=sum+nums[i] ; 
            maximum=max(maximum,sum) ;
            if (sum < 0){
                sum=0 ; 
            }
            
    } 
    return maximum ; 
    }
};