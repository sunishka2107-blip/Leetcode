class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        int pos = -1; 
        for(int i=0 ; i<n ;i++){
            if(nums[i] == pivot){
                pos = i ;
                break ; 
            }
        }
        for(int i=pos+1 ; i<n ; i++){
            if(nums[i] < pivot){
                int temp = nums[i] ; 
                nums.erase(nums.begin()+i) ; 
                nums.insert(nums.begin() + pos , temp);
                pos++ ; 
            }
        }
        int lpos = pos ; 
        for(int i=pos+1 ; i<n ; i++){
            if(pivot == nums[i]){
                lpos = i ; 
            }
        }
        for(int i=lpos-1 ; i>=0 ; i--){
            if(nums[i] > pivot){
                int temp = nums[i] ; 
                nums.erase(nums.begin()+i) ; 
                nums.insert(nums.begin() + lpos  , temp);
                lpos-- ; 
            }
        }
        return nums;
        
    }
};