class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
       
        int n = items.size();

        vector<int> bonus(n, 0);

        // Calculate free copies for each item type
        for (int i = 0; i < n; i++) {
            int factor = items[i][0];

            for (int j = 0; j < n; j++) {
                if (i != j && items[j][0] % factor == 0) {
                    bonus[i]++;
                }
            }
        }

        // dp[b] = maximum copies obtainable within budget b
        vector<int> dp(budget + 1, 0);

        for (int i = 0; i < n; i++) {
            int price = items[i][1];
            int freeCopies = bonus[i];

            vector<int> prev = dp;

            // First purchased copy:
            // 1 purchased copy + free copies
            for (int b = price; b <= budget; b++) {
                dp[b] = max(dp[b],
                            prev[b - price] + 1 + freeCopies);
            }

            // Additional copies of the same item
            for (int b = price; b <= budget; b++) {
                dp[b] = max(dp[b], dp[b - price] + 1);
            }
        }

        return dp[budget];

    }
};