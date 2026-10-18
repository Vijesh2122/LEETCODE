
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();

        if (n == 0) return ans;

        int l = 0;

        for (int i = 1; i <= n; i++) {
            if (i < n && (long long)nums[i] == (long long)nums[i - 1] + 1) {
                continue;
            }

            if (l == i - 1) {
                ans.push_back(to_string(nums[l]));
            } else {
                ans.push_back(to_string(nums[l]) + "->" +
                              to_string(nums[i - 1]));
            }

            l = i;
        }

        return ans;
    }
};
