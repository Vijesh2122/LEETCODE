class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for (int n = k; ; n += k) {
            bool found = false;

            for (int x : nums) {
                if (x == n) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                return n;
            }
        }
    }
};