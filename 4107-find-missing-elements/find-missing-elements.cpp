
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        bool present[101] = {false};

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        for (int x : nums) {
            present[x] = true;
        }

        for (int i = mn; i <= mx; i++) {
            if (!present[i]) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
