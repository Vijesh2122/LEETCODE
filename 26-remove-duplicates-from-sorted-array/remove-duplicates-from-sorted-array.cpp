class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;

        for (int x : nums) {
            s.insert(x);
        }

        int k = 0;
        for (int x : s) {
            nums[k] = x;
            k++;
        }

        return k;
    }
};