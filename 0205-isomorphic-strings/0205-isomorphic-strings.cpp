class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false ; 
        }
        unordered_map<char,char> m1 ; 
        unordered_map<char,char> m2 ; 

        for(int i=0 ; i<s.size() ; i++){
            m1[s[i]] = i ; 
            m2[t[i]] = i ; 
        }
        
        for(int i=0 ; i<s.size() ; i++){
            if(m1[s[i]] != m2[t[i]]){
                return false ; 
            }
        }
        return true ; 
    }
};