class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size() ; 
        int maximum = INT_MIN;
        for(int i=0 ; i<n ; i++){
            int sum1 = 0 ; 
            for(int j=0 ; j <m ; j++){
                sum1 = sum1 + accounts[i][j] ; 
            }
            maximum = max(maximum , sum1);
        }
        return maximum ; 
        
    }
};