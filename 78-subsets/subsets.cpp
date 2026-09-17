class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, int index, vector<int>& current) {
        // Every current selection is a valid subset
        ans.push_back(current);

        for (int i = index; i < nums.size(); i++) {
            // Choose
            current.push_back(nums[i]);

            // Explore
            solve(nums, i + 1, current);

            // Undo choice
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        solve(nums, 0, current);
        return ans;
    }
};