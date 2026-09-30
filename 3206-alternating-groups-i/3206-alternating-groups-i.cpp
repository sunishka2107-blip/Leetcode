class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int ans =0 ; 
        int n = colors.size() ; 
        for(int i= 0 ; i<n ; i++){
            int rear = (i+1)% n ; 
            int front = (i-1+n) % n ; 
            if(colors[front] != colors[i] && colors[i] != colors[rear]) {
                ans++ ; 
            }
        }
        return ans ; 
    }
};