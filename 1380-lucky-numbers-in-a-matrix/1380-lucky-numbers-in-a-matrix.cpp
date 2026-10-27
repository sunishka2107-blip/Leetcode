class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size() ; 
        int n = matrix[0].size();
        map<int,int> mp ; 
        vector<int> v ; 

        for(int i=0 ; i<m ; i++){
            int small= INT_MAX ; 
            for(int j=0 ; j<n ; j++){
                if(matrix[i][j] < small){
                    small = matrix[i][j] ; 
                }
            }
            mp[small]++ ; 
        }
        for(int j=0 ; j<n ; j++){
            int large = INT_MIN ; 
            for(int i=0 ; i<m ; i++){
                if(matrix[i][j] > large){
                    large = matrix[i][j] ; 
                }
            }
            mp[large]++ ; 
        }

        for(auto it : mp){
            if(it.second == 2){
                v.push_back(it.first) ; 
            }
        }
        return v ; 
        
    }
};