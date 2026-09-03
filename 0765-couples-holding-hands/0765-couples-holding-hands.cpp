class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int count = 0;
        for (int i = 0; i < row.size(); i += 2) {
            int p = row[i];
            int q;
            if (p % 2 == 0) {
                q = p + 1;
            } else {
                q = p - 1;
            }
            if (row[i + 1] != q) {
                for (int j = i + 2; j < row.size(); j++) {
                    if (row[j] == q) {
                        swap(row[j], row[i + 1]);
                        count++;
                    }
                }
            }
        }
        return count;
    }
};