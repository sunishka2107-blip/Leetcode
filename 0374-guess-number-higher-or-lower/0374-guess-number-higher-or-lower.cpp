/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start = 1 , end = n ; 
        while (start<=end){
            int num = start+(end-start)/2 ; 
            if(guess(num)==0){
                return num ; 
            }
            else if(guess(num)==-1){
                end=num-1 ;
            }
            else{
                start = num+1 ;
            }
        }
        return -1;
    }
};