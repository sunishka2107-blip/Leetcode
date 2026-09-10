class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long count = 0 ;
        for(long long i=0 ; i<=total/cost1 ; i++){
            count = count+(total - i*cost1)/cost2 + 1; 
        }
        return count ; 
        }
        
    
};