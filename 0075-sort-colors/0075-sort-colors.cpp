class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size() ; 
        int count0 = 0 ;
        int count1 = 0 ;
        int count2 = 0 ;
        for (int i = 0 ; i<n ; i++){
            if(nums[i]==0){
                count0++ ; 
            }
            else if (nums[i]==1){
                count1++ ;
            }
            else {
                count2 ++ ;
            }
    }
    nums.clear() ; 
    for (int i=0 ; i<count0 ; i++){
        nums.push_back(0);
    }
    for (int i=0 ; i<count1 ; i++){
        nums.push_back(1);
        
    }
    for (int i=0 ; i<count2 ; i++){
        nums.push_back(2);}
    } 
};