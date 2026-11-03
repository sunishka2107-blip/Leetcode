class Solution {
public:
    int minMoves(vector<int>& nums) {
        int large = INT_MIN ; 
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] > large){
                large = nums[i];
            }
        }
        int count = 0 ;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] < large){
                int a = large - nums[i] ; 
                count = count + a;
            }
        }
        return count ;
        
    }
};