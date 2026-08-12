class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int no=n;
        for (int i=0 ; i<n ; i++){
            if (nums[i]==target){
                return i;
            }
            else if (nums[i]>target){
                no = i ; 
                break ;
            }
        }
        return no;
        
    }
};