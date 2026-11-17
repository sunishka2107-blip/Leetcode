class Solution {
public:
    int sumOfPrimesInRange(int n) {
       int no = n ; 
       int r = 0 ; 
       while(no > 0){
        r = 10*r + (no%10);
        no = no / 10 ; 
       } 
       int a = min(n,r);
       int b = max(n,r);

       int sum= 0 ;
       for(int i=a ; i<=b ; i++){
        bool isPrime = true ; 
        if(i==1){
            isPrime = false ; 
        }
        for(int j=2 ; j<=i/2 ; j++){
            if(i%j == 0){
                isPrime = false ; 
            }
        }
        if(isPrime == true){
            sum = sum+i ; 
        }
       }
       return sum ; 
    }
};