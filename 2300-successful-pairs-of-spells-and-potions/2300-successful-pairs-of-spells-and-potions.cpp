class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin() , potions.end());
        int n = spells.size() ; 
        int m = potions.size() ; 
        vector<int> pairs;

        for(int i=0 ; i<n ; i++){
            int start = 0 ; 
            int end = m-1 ; 
            int count = 0 ;

            while(start <= end){
                int mid = start + (end-start)/2 ; 
                if(1LL * spells[i] * potions[mid] >= success){
                    count = m - mid ; 
                    end = mid-1 ; 
                }
                else{
                    start = mid+1 ; 
                }
            } 
            pairs.push_back(count);
        }
        return pairs ; 
        
    }
};