class Solution {
public:
    int power(int a , int b , int z){
        int x = 1 ;
        while(b>0){
            x = (x * a)%z ; 
            b-- ; 
        }
        return x ; 
    }
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        int n = variables.size();
        vector<int> v ; 
        for(int i=0 ; i<n ; i++){
            int a = variables[i][0];
            int b = variables[i][1];
            int c = variables[i][2] ; 
            int m = variables[i][3];

            int x = power(a,b,10);
            int y = power(x,c,m) ; 

            if(y == target){
                v.push_back(i);
            }
        }
        return v ; 
    }
};