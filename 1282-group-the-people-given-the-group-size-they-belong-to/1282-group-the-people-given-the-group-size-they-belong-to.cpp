class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> m ; 
        vector<vector<int>> ans ; 
        int n = groupSizes.size();

        for(int i=0 ; i<n ; i++){
            int a = groupSizes[i];
            m[a].push_back(i);
            if(m[a].size() == a){
                ans.push_back(m[a]);
                m[a].clear();
            }
        }
        return ans ;
    }
};