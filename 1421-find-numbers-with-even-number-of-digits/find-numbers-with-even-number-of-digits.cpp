
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0;

        for (int x : nums) {
            int digits = 0;

            while (x > 0) {
                digits++;
                x /= 10;
            }

            if (digits % 2 == 0)
                c++;
        }

        return c;
    }
};
