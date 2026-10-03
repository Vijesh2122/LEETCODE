
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        bool appeared[101] = {};
        bool repeatedBlock[101] = {};

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];

            if (i == 0 || nums[i - 1] != x) {
                if (appeared[x]) {
                    repeatedBlock[x] = true;
                }
                appeared[x] = true;
            }
        }

        int ans = 0;

        for (int x = 1; x <= 100; x++) {
            if (appeared[x] && !repeatedBlock[x]) {
                ans++;
            }
        }

        return ans;
    }
};