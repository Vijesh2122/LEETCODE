class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());

        long long closest = (long long)nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; i++) {

            // Skip duplicate values for i
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {

                long long sum = (long long)nums[i] 
                              + nums[left] 
                              + nums[right];

                // Exact answer
                if (sum == target)
                    return target;

                // Update closest sum
                if (abs(sum - target) < abs(closest - target)) {
                    closest = sum;
                }

                // Move pointers
                if (sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return (int)closest;
    }
};