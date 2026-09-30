class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans ; 
        map <int,int> m ; 
        int n = grid.size() ; 
        for(int i= 0 ; i< n ; i++){
            for(int j = 0 ; j < n ; j++){
                m[grid[i][j]]++ ; 
            }
        }
        for(int i=1 ; i<=n*n ; i++ ){
            if(m[i] > 1 ){
                ans.insert(ans.begin() , i) ; 
            }
            if(m[i] == 0){
                ans.push_back(i) ; 
            }
        }
        return ans ;
        
    }
};