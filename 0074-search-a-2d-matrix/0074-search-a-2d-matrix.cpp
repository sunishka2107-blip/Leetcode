class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int i = 0;
        int j = r - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (matrix[mid][0] > target) {
                j = mid - 1;
            } else if (matrix[mid][c - 1] < target) {
                i = mid + 1;
            } else {
                i = mid;
                break;
            }
        }
        if (i >= r) {
            return false;
        }

        int x = 0;
        int y = c - 1;
        while (x <= y) {
            int mid = x + (y - x) / 2;
            if (matrix[i][mid] == target) {
                return true;
            } else if (matrix[i][mid] > target) {
                y = mid - 1;
            } else {
                x = mid + 1;
            }
        }
        return false;
    }
};