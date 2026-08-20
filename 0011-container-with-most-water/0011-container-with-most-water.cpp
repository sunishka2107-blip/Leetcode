class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size() ; 
        int lp=0 , rp=n-1 ; 
        int maxwater = 0 ; 
        while(lp<rp){
            int w = rp-lp ; 
            int ht = min(height[lp] , height[rp]) ; 
            int currwater = w*ht ; 
            maxwater = max(maxwater,currwater);
            if (height[lp]<height[rp]){
                lp++ ; 
            }
            else {
                rp-- ;
            }

        }
        return maxwater;
        
    }
};