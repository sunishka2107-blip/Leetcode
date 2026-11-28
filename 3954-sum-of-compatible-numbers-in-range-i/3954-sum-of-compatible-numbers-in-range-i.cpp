class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum = 0 ;
        for(int x = max(1,n-k) ; x<= n+k ; x++){
            if(abs(n-x)<=k && (n&x) == 0){
                sum = sum + x ; 
            }
        }
        return sum ; 
    }
};