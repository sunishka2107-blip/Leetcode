class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() ; 
        sort(nums.begin() , nums.end()) ; 
        if (n%2 == 0){
            return nums [n/2] ; 
        }
        else {
            return nums [(n-1)/2] ;
        }
        
    }
};