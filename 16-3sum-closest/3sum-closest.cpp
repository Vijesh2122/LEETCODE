class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i, j, k, l = 0;
        long long int s = 1000000000;

        if(target < 0) {

            for(i = 0; i < nums.size() - 2; i++) {
                for(j = i + 1; j < nums.size() - 1; j++) {
                    for(k = j + 1; k < nums.size(); k++) {

                        long long int sum = (long long)nums[i] + nums[j] + nums[k];

                        if(sum == target) {
                            return target;
                        }
                        else if(sum > target) {
                            if(abs(sum - target) < abs(s)) {
                                s = sum - target;
                                l = s;
                            }
                        }
                        else {
                            if(abs(target - sum) < abs(s)) {
                                s = target - sum;
                                l = -s;
                            }
                        }
                    }
                }
            }

            return target + l;
        }

        else {

            for(i = 0; i < nums.size() - 2; i++) {
                for(j = i + 1; j < nums.size() - 1; j++) {
                    for(k = j + 1; k < nums.size(); k++) {

                        long long int sum = (long long)nums[i] + nums[j] + nums[k];

                        if(sum == target) {
                            return target;
                        }
                        else if(sum < target) {
                            if(abs(sum - target) < abs(s)) {
                                s = abs(sum - target);
                                l = target - s;
                            }
                        }
                        else {
                            if(abs(sum - target) < abs(s)) {
                                s = abs(sum - target);
                                l = target + s;
                            }
                        }
                    }
                }
            }

            return l;
        }
    }
};