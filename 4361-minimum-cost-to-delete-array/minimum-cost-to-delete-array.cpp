
class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n = nums.size();

        long long even = 0;
        long long odd = LLONG_MAX / 2;

        for (int i = 1; i < n - 1; i++) {
            long long x = nums[i];

            long long newEven = min(even, odd + x);
            long long newOdd  = min(odd, even + x);

            even = newEven;
            odd = newOdd;
        }

        return (long long)nums[0] + nums[n - 1] + even;
    }
};
