class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> s;

        // Store all numbers
        for (int x : nums) {
            s.insert(x);
        }

        int ans = -1;

        // Check whether -x exists
        for (int x : nums) {
            if (x > 0 && s.count(-x)) {
                ans = max(ans, x);
            }
        }

        return ans;
    }
};