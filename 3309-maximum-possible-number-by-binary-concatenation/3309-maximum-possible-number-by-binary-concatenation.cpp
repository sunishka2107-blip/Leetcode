class Solution {
public:
string toBinary(int n){
    string s = "" ; 
    while(n>0){
        int temp = n%2 ; 
        if(temp == 1){
            s = '1' + s ; 
        }
        else{
            s = '0' + s ; 
        }
        n = n/2 ; 
    }
    return s ;
}
    int maxGoodNumber(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                for(int k = 0; k < 3; k++) {

                    if(i != j && j != k && i != k) {

                        string s = "";

                        s += toBinary(nums[i]);
                        s += toBinary(nums[j]);
                        s += toBinary(nums[k]);

                        int num = 0;

                        for(int x = 0; x < s.length(); x++) {
                            int temp = s[x] - '0';

                            if(temp == 1)
                                num = num * 2 + 1;
                            else
                                num = num * 2;
                        }

                        ans = max(ans, num);
                    }
                }
            }
        }

        return ans;

        
    }
};