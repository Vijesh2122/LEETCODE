
class Solution {
public:
    int countEven(int num) {
        int ans = 0;

        for (int i = 1; i <= num; i++) {
            int x = i, sum = 0;

            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }

            if (sum % 2 == 0)
                ans++;
        }

        return ans;
    }
};
