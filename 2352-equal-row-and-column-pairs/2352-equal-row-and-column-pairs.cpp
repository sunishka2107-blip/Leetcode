class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int a = 0;
                for (int k = 0; k < m; k++) {

                    if (grid[i][k] == grid[k][j]) {
                        a++;
                    }
                }
                if (a == m) {
                    count++;
                }
            }
        }
        return count;
    }
};