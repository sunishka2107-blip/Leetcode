class Solution {
public:
    string digitSum(string s, int k) {
        
        int n = s.size() ; 
        while(n>k){
            string ans = "" ; 
            for(int i=0 ; i<n ; i+=k){
                int sum = 0 ; 
                string temp = s.substr(i,k);
                for(int j=0 ; j<temp.size() ; j++){
                    int digit = temp[j] - '0' ; 
                    sum = sum + digit ; 
                }
                ans = ans + to_string(sum);
            }
        s = ans ; 
        n = s.size();
        }
        return s ; 
        
    }
};