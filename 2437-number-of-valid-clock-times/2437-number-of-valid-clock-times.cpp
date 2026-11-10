class Solution {
public:
    int countTime(string time) {
        string h = time.substr(0,2);
        string m = time.substr(3,2) ; 

        int a=0 ;
        int b=0 ; 
        if(h[0] == '?' && h[1] == '?'){
            a = 24 ; 
        } 
        else if(h[0] == '?'){
            if(h[1] > '3'){
                a=2 ; 
            }
            else{
                a=3 ; 
            }
        }
        else if(h[1] == '?'){
            if(h[0] == '2'){
                a=4 ; 
            }
            else{
                a=10;
            }
        }
        else{
            a=1 ; 
        }
        if(m[0] == '?' && m[1] == '?'){
            b=60 ; 
        }
        else if(m[0] == '?'){
            b=6 ; 
        }
        else if(m[1] == '?'){
            b=10;
        }
        else{
            b=1 ; 
        }
        return a*b;
    }
};