class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int count = 0 ; 
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            int sum = 0 ; 
            for(int j=i ; j<n ; j++){
                sum = sum + nums[j];

                for(int k=i ; k<=j ; k++){
                    if(sum == nums[k]){
                        count++ ; 
                        break ; 
                    }
                }
            }
        }
        return count;
    }
};