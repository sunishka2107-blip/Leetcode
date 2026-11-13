class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i=0 ; 
        while(i<n && s[i] == ' '){
            i++;
        }
        int sign = 1 ; 
        if(s[i] == '-'){
            sign = -1 ; 
            i++;
        }
        else if(s[i] == '+'){
            sign = 1 ; 
            i++ ; 
        }

        long long int no = 0 ; 
        while(i<n && s[i] >= '0' && s[i] <= '9'){
            int a = s[i] - 48 ; 
            no = no*10 + a ;

            if(no*sign > INT_MAX){
                return INT_MAX ; 
            } 
            if(no*sign < INT_MIN){
                return INT_MIN ; 
            }
            i++;
        }
        return no*sign ; 
        
    }
};