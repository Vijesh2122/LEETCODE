class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        long long s = 1000000000;
        int l = 0;

        for(int i = 0; i < nums.size() - 2; i++) {
            for(int j = i + 1; j < nums.size() - 1; j++) {
                for(int k = j + 1; k < nums.size(); k++) {

                    long long sum = (long long)nums[i] + nums[j] + nums[k];

                    if(sum == target)
                        return target;

                    if(abs(sum - target) < abs((long long)l - target) || l == 0) {
                        l = sum;
                    }
                }
            }
        }

        return l;
    }
};