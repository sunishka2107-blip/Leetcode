class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> v = board;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int count = 0;
                if (i-1 >= 0 && j-1 >= 0 && v[i-1][j-1] == 1) {
                    count++;
                }
                if (i-1 >= 0 && v[i-1][j] == 1) {
                    count++;
                }
                if (i-1 >= 0 && j+1 < m && v[i-1][j+1] == 1) {
                    count++;
                }
                if (j-1 >= 0 && v[i][j-1] == 1) {
                    count++;
                }

                if (j+1 < m && v[i][j+1] == 1) {
                    count++;
                }

                if (i+1 < n && j-1 >= 0 && v[i+1][j-1] == 1) {
                    count++;
                }

                if (i+1 < n && v[i+1][j] == 1) {
                count++;
                }

                if (i+1 < n && j+1 < m && v[i+1][j+1] == 1) {
                    count++;
                }
                if (v[i][j] == 0) {
                    if (count == 3) {
                        board[i][j] = 1;
                    }
                } else {
                    if (count == 2 || count == 3) {
                        board[i][j] = 1;
                    } else {
                        board[i][j] = 0;
                    }
                }
            }
        }
    }
};