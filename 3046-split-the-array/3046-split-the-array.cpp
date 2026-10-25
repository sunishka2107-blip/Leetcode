class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map <int,int> m ; 
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            m[nums[i]]++ ; 

            if(m[nums[i]]>2){
                return false ; 
            }
        }
        return true ; 

    }
};