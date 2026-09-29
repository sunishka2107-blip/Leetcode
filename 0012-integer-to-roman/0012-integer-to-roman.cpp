class Solution {
public:
    string intToRoman(int num) {
        string s = "" ;
        int n = num ;  
        while(n > 0){
            if(n>=1000){
                s = s+"M" ; 
                n = n-1000 ; 
            }
            else if(n>=900){
                s = s+"CM" ; 
                n=n-900 ; 
            }
            else if(n>=500){
                s = s+"D" ;
                n = n-500 ; 
            }
            else if(n>=400){
                s = s+"CD" ; 
                n=n-400 ; 
            }
            else if(n>=100){
                s=s+"C" ; 
                n=n-100 ; 
            }
            else if(n>=90){
                s=s+"XC" ; 
                n=n-90 ; 
            }
            else if(n>=50){
                s = s+"L" ; 
                n=n-50 ; 
            }
            else if(n>=40){
                s=s+"XL" ; 
                n=n-40 ; 
            }
            else if(n>=10){
                s=s+"X" ; 
                n=n-10 ; 
            }
            else if(n>=9){
                s=s+"IX" ; 
                n=n-9 ; 
            }
            else if(n>=5){
                s=s+"V" ; 
                n=n-5 ; 
            }
            else if(n>=4){
                s=s+"IV" ; 
                n=n-4 ; 
            }
            else{
                s=s+"I" ; 
                n=n-1 ; 
            }
        }
        return s ; 
        
    }
};