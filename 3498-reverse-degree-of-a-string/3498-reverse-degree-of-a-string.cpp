class Solution {
public:
    int reverseDegree(string s) {
        int sz = s.size() ; 
        int ans = 0 ; 
        for(int i=0 ; i<sz ; i++){
            int r = 'z' - s[i] + 1 ; 
            ans = ans + (r*(1+i)) ; 
        }
        return ans ; 
         
    }
};