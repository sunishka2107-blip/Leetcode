class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected ; 
        for(int i= 0 ; i<heights.size() ; i++){
            expected.push_back(heights[i]);
        }
        sort(expected.begin() , expected.end());
        int count = 0 ;
        int n = expected.size() ; 
        for(int i=0 ; i<n ; i++){
            if(expected[i]!=heights[i]){
                count++ ; 
            }
        }
        return count ; 
        
    }
};