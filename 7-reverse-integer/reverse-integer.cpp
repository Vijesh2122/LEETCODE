class Solution {
public:
    int reverse(int x) {
        long long t = 0;

        while (x != 0) {
            t = t * 10 + x % 10;
            x = x / 10;
        }

        if (t > 2147483647 || t < -2147483648LL)
            return 0;

        return (int)t;
    }
};