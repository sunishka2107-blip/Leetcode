class Solution {
public:
    int smallestIndex(vector<int>& nums) {
       
        int n = nums.size() ;
        
        for(int i = 0 ; i<n ; i++){
            int sum = 0 ; 
            int no = nums[i] ; 
            while(no>0){
                int a = no%10 ; 
                sum = sum+a ; 
                no = no/10;
            }
            if(i == sum){
                return i  ; 
            }
           
        }
        return -1; 
    }
};