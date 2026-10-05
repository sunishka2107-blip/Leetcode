class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size() ; 
        map<int,int> m ; 
        for(int i=0 ; i<n ; i++){
            if(nums[i] % k == 0){
                m[nums[i]]++ ; 
            }
        }
        int a = k ; 
        while(m[a] > 0){
            a = a+k ; 
        }
        return a ;
    }
};