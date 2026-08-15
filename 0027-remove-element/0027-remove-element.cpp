class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0 ; 
        int count = 0 ;
        int n=nums.size();
        for (int i=0 ; i<n ; i++){
            if(nums[j]==val){
                nums.erase(nums.begin()+j) ; 
                nums.push_back(0) ;
                count ++ ;
            }
            else {
                j++ ;
            }
        }
        return n-count ;
        
    }
};