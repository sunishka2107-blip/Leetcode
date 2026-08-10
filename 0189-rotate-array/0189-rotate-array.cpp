class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size() ; 
        if (n>k){}
        else if (n==k){
            return ;
        }
        else {
            k=k%n ;
        }
        int i=0 ; 
        int j=n-1 ; 
        while (i<=j){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++ ;
            j--;
        }
        i=0 ; 
        j=k-1 ; 
        while (i<=j){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++ ;
            j--;
        }
        i=k ; 
        j=n-1 ; 
        while (i<=j){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++ ;
            j--;
        }
        
    }
};