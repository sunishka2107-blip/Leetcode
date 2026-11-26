class Solution {
public:
    bool canAliceWin(int n) {
        int a = 10 ;
        int b = 9 ; 
        if(n<10){
            return false ; 
        }
        while(a>0){
            if(n<a){
                return false ; 
            }
            n = n - a ; 

            if(n<b){
                return true ; 
            }
            n = n - b ;

            a = a - 2 ; 
            b = b - 2 ;

            if(a == 0 || b==0){
                break ; 
            }
        }
        return false ; 
    }
};