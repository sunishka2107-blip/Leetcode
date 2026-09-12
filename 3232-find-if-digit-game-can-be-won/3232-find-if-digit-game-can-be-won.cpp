class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size() ; 
        int sum = 0 ; 
        int sum1 = 0 ; 
        int sum2 = 0 ; 
        for(int i=0 ; i<n ; i++){
            sum = sum + nums[i] ; 
            if(nums[i]<10){
                sum1 = sum1 + nums[i] ; 
            }
            else if(nums[i]<100){
                sum2 = sum2 + nums[i] ; 
            }
        }
        int a = max(sum1,sum2) ; 
        int b = sum - a ; 

        if(a>b){
            return true ; 

        }
        return false ; 
    }
};