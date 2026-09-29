class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int rows = mat.size();
        int cols = mat[0].size();

        // Cannot reshape if total number of elements is different
        if (rows * cols != r * c) {
            return mat;
        }

        // Create r x c vector
        vector<vector<int>> a(r, vector<int>(c));

        int p = 0;
        int q = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                a[p][q] = mat[i][j];

                q++;

                if (q == c) {
                    q = 0;
                    p++;
                }
            }
        }

        return a;
    }
};