class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
         sort(special.begin() , special.end());
        int maximum =INT_MIN;
        int i=bottom ; 
        int n = special.size() ; 
        for(int j=0 ; j <n ; j++){
            int c = special[j] - i ; 
            maximum = max(maximum , c);
            i = special[j] + 1 ; 
        }
        int c = top - i + 1 ; 
        maximum = max(maximum,c);
        return maximum ; 
    }
};