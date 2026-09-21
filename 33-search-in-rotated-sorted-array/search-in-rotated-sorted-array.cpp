class Solution {
public:
    int search(vector<int>& nums, int target) {

        int a = 0;
        int b = nums.size() - 1;

        while (a <= b) {

            int c = a + (b - a) / 2;

            if (nums[c] == target)
                return c;

            // Left half is sorted
            if (nums[a] <= nums[c]) {

                if (nums[a] <= target && target < nums[c])
                    b = c - 1;
                else
                    a = c + 1;
            }

            // Right half is sorted
            else {

                if (nums[c] < target && target <= nums[b])
                    a = c + 1;
                else
                    b = c - 1;
            }
        }

        return -1;
    }
};