
class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int ans = 0;
        int i = 1;

        for (int j = 0; j < 4; j++) {
            int digit = min({num1 % 10, num2 % 10, num3 % 10});
            ans += digit * i;

            i *= 10;
            num1 /= 10;
            num2 /= 10;
            num3 /= 10;
        }

        return ans;
    }
};
