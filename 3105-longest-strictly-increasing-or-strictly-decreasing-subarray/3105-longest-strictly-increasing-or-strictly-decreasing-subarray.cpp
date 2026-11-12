class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size() ; 
        int c = 1 ; 
        int x = 1 ; 
        for(int i=1 ; i<n ; i++){
            if(nums[i] > nums[i-1]){
                c++ ; 
            }
            else{
                c=1 ; 
            }
            x = max(c,x);
        }
        c=1 ; 
        for(int i=1 ; i<n ; i++){
            if(nums[i] < nums[i-1]){
                c++ ; 
            }
            else{
                c=1 ; 
            }
             x = max(c,x) ; 
        }
       
        return x ; 
    }
};