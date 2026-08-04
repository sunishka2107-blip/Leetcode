class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0 ; 
        sort (nums.begin() , nums.end());
        int n = nums.size();
        if (n==1){
            result = nums[0] ;
        }
        else if (nums[0] != nums[1]){
            result = nums[0] ; 
        }
        else if (nums[n-1] != nums[n-2]){
        result = nums[n-1];
        }
        else{
            for (int i=1 ; i<n-1 ; i++ ){
                if (nums[i] != nums[i-1] && nums[i] != nums[i+1]){
                    result = nums[i];
                }
            }
        }
        return result;
    }
        


};