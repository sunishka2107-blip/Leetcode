class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0 ; 
        for(int i=0 ; i<n ; i++){
            int l = 1 ; 
            for(int j=i ; j<n ; j++){
                l = lcm(l,nums[j]);

                if(l == k){
                    count ++ ; 
                }
                if(l>k){
                    break;
                }
            }
        }
        return count ; 
    }
};