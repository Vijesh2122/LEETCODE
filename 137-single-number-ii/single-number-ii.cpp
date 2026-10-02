
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < 32; i++) {
            int count = 0;

            for (int x : nums) {
                if ((static_cast<unsigned int>(x) >> i) & 1u) {
                    count++;
                }
            }

            if (count % 3 != 0) {
                ans |= (1u << i);
            }
        }

        return ans;
    }
};