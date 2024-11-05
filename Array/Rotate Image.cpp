class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        for (int i = 0; i <= r-2; i++) {
            for (int j = i+1; j <= c-1; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < r; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
