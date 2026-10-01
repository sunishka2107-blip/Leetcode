class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if(n<=k && m<=k){
            return 0 ; 
        }
        long long cost = 0 ; 
        while(n>k){
            long long len1 = k ; 
            long long len2 = n- k ; 
            cost = cost + len1*len2 ; 
            n=len2  ;  
        }
        while(m>k){
            long long len1 = k ; 
            long long len2 = m - k ; 
            cost = cost + len1*len2 ; 
            m=len2;  
        }
        return cost ; 
        
    }
};