class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();

        // Put each number x at index x-1
        for (int i = 0; i < n; i++) {

            while (nums[i] >= 1 &&
                   nums[i] <= n &&
                   nums[nums[i] - 1] != nums[i]) {

                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // Find the first position where the number is incorrect
        for (int i = 0; i < n; i++) {

            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        // 1 to n are all present
        return n + 1;
    }
};