
class Solution {
public:
    int dp[101][101];

    int path(int i, int j, int m, int n) {
        if (i == m - 1 && j == n - 1)
            return 1;

        if (i >= m || j >= n)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        return dp[i][j] =
            path(i + 1, j, m, n) +
            path(i, j + 1, m, n);
    }

    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof(dp));
        return path(0, 0, m, n);
    }
};
