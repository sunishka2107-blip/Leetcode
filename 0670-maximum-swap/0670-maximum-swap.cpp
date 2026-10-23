class Solution {
public:
    int maximumSwap(int num) {
        vector<int> v;
        while (num > 0) {
            int a = num % 10;
            v.push_back(a);
            num = num / 10;
        }
        reverse(v.begin(), v.end());
        int n = v.size();
        
        for (int i = 0; i < n; i++) {
            int maximum = INT_MIN;
            int y=0 ; 
            for (int j = i + 1; j < n; j++) {
                if (v[j] >= maximum) {
                    maximum = v[j];
                     y = j ; 
                }
            }

            if (v[i] < maximum) {
                swap(v[i], v[y]);
                break;
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = ans * 10 + v[i];
        }
        return ans;
    }
};