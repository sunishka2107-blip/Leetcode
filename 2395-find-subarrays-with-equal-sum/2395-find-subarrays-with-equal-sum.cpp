class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int sum1 = 0 ;
        int sum2 = 0 ; 
        for(int i=0 ; i<nums.size()-1 ; i++){
            sum1 = nums[i] + nums[i+1] ;
            for(int j = i+1 ; j<nums.size()-1 ; j++){
                sum2 = nums[j]+nums[j+1] ; 
            
                if(sum1 == sum2){
                    return true ; 
                }
            }
        }
        return false ; 
        
    }
};