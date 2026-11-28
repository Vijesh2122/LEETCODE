class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();

        vector<int> freq(n + 1, 0);

        // Count frequencies of factors
        for (auto &item : items) {
            freq[item[0]]++;
        }

        // Calculate how many items each factor can divide
        vector<int> divisible(n + 1, 0);

        for (int f = 1; f <= n; f++) {
            for (int multiple = f; multiple <= n; multiple += f) {
                divisible[f] += freq[multiple];
            }

            // Exclude the item itself
            divisible[f]--;
        }

        // Sort items by price
        sort(items.begin(), items.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        int minPrice = items[0][1];

        long long remainingBudget = budget;
        long long bonusCopies = 0;

        // Greedily buy bonus-eligible copies
        for (auto &item : items) {
            int factor = item[0];
            int price = item[1];

            if (price > 2LL * minPrice)
                break;

            long long capacity = divisible[factor];

            // Number of copies affordable
            long long canBuy = remainingBudget / price;

            long long take = min(capacity, canBuy);

            bonusCopies += take;
            remainingBudget -= take * price;
        }

        // Each bonus purchase gives 2 total items
        long long answer = bonusCopies * 2;

        // Buy ordinary items using remaining budget
        answer += remainingBudget / minPrice;

        return answer;
    }
};
