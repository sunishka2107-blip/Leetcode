class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m ; 
        vector<int> v ; 
        for(int i=0 ; i<n ; i++){
            m[nums[i]]++ ; 
        }
        for(auto it:m){
            if(it.second == 1 && m.count(it.first-1)==0 && m.count(it.first+1)==0){
                v.push_back(it.first) ; 
            }
        }
        return v ; 
        
    }
};