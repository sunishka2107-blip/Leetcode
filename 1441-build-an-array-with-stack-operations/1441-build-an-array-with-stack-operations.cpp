class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int t = target.size() ; 
        stack <int> s ; 
        vector<string> a ; 
        for(int i = 1 ; i<=n ; i++){
            int count = 0 ;
            for(int j=0 ; j<t ; j++){
                if(target[j] == i){
                    count ++ ; 
                }
            }
            s.push(i) ; 
            a.push_back("Push") ; 
            if(count == 0){
                s.pop() ; 
                a.push_back("Pop") ; 
            }
            if(i == target[t-1]){
                return a ; 
            }
        }
        return a ; 
        
    }
};