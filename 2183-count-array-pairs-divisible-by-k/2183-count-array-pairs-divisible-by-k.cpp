class Solution {
public:
    int gcd(int a, int b) {
        while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
        }

        return a;
    }
    long long countPairs(vector<int>& nums, int k) {
        long long count = 0;
        unordered_map<int, int> m;
        for (int i : nums) {
            int g = gcd(i, k);

            for (auto it : m) {
                if ((1LL * g * it.first) % k == 0) {
                    count = count + it.second;
                }
            }
            m[g]++ ;
        }
        return count;
    }
};