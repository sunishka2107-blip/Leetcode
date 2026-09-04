class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        
        for(int i=0 ; i<n ; i++){
            int smallest = INT_MAX ; 
            int largest = INT_MIN ;
            for(int j=0 ; j<=i ; j++)
                largest = max(nums[j],largest);
            for(int j= i ; j<=n-1 ; j++){
                smallest = min(nums[j] , smallest);           
                 }
            int a = largest - smallest ; 
            if(a<=k){
                return i ; 
            }
        }
        return -1 ; 
        
    }
};