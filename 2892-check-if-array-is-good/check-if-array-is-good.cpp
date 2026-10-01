class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = *max_element(nums.begin(), nums.end());

        // base[n] has n + 1 elements
        if (nums.size() != n + 1)
            return false;

        vector<int> freq(n + 1, 0);

        for (int x : nums) {
            // x must be between 1 and n
            if (x < 1 || x > n)
                return false;

            freq[x]++;
        }

        // 1 to n-1 should occur once
        for (int i = 1; i < n; i++) {
            if (freq[i] != 1)
                return false;
        }

        // n should occur twice
        if (freq[n] != 2)
            return false;

        return true;
    }
};