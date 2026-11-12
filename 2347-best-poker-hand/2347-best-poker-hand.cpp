class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<int,int> r ; 
        map<char,int> s ; 
        for(int i=0 ; i<5 ; i++){
            r[ranks[i]]++ ; 
            s[suits[i]]++ ; 
        }
        for(auto it : s){
            if(it.second == 5){
                return "Flush" ; 
            }
        }
        for(auto it : r){
            if(it.second >= 3){
                return "Three of a Kind" ; 
            }
        }
        for(auto it : r){
            if(it.second >= 2){
                return "Pair" ; 
            }
        }
        return "High Card" ;
        
    }
};