class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0 ;
        int sum2 = 0 ;
        int maximum = INT_MIN ;
        int minimum = INT_MAX ;  
        for(int i=0 ; i<n ; i++){
            sum1  = sum1 + nums[i] ; 
            maximum = max(maximum , sum1);
            if(sum1<0){
                sum1 = 0 ;
            }
        }
        for(int i=0 ; i<n ; i++){
            sum2 = sum2 + nums[i] ; 
            minimum = min(minimum , sum2);

            if(sum2>0){
                sum2 = 0 ;
            }
        }
        int ans = max(maximum , abs(minimum)); 
        return ans ; 
    }
};