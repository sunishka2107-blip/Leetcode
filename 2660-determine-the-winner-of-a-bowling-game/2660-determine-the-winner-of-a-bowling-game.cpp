class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int s1 = 0 ;
        int s2 = 0 ; 
        int c1 = 0 ,c2 = 0 ;

        for(int i=0 ; i<player1.size() ; i++){
            
            if(c1>0){
                s1 = s1 + 2*player1[i];
                c1-- ; 
            }
            else{
                s1 = s1 + player1[i];
            }

            
            if(c2>0){
                s2 = s2 + 2*player2[i];
                c2-- ; 
            }
            else{
                s2 = s2 + player2[i];
            }
            if(player1[i] == 10){
                c1=2 ; 
            }
            if(player2[i] == 10){
                c2=2 ; 
            }
        }
        if(s1>s2){
            return 1 ; 
        }
        else if(s1<s2){
            return 2 ; 
        }
        else{
            return 0 ; 
        }
        
    }
};