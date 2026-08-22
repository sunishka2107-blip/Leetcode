class Solution {
public:
    int reverseBits(int n) {
        vector <int>v ; 
        while(n>0){
            int temp = n%2 ; 
            v.insert(v.begin(),temp) ; 
            n=n/2;
        }
        int s=v.size();
        int rem = 32 - s ; 
        for (int i=0 ; i<rem ; i++){
            v.insert(v.begin(),0) ; 
        }
        int i=0 , j=31 ; 
        while (i<=j){
            int t = v[i] ; 
            v[i] = v[j] ;
            v[j] = t ;
            i++ ; 
            j-- ;
        }
        unsigned int count = 0 ;
        unsigned int power = 1 ; 
        for (int i=31 ; i>=0 ; i--){
            count+=v[i]*power ; 
            power = power * 2 ;
        } 
        return count ; 
    }
};