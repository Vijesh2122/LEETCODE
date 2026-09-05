class Solution {
public:
    int divide(int dividend, int divisor) {

        // Overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = dividend;
        long long b = divisor;

        // Determine the sign
        bool negative = (a < 0) != (b < 0);

        // Convert both to positive
        a = abs(a);
        b = abs(b);

        long long quotient = 0;

        // Find quotient using powers of 2
        while (a >= b) {

            long long temp = b;
            long long multiple = 1;

            while (a >= (temp << 1)) {
                temp = temp << 1;
                multiple = multiple << 1;
            }

            a = a - temp;
            quotient = quotient + multiple;
        }

        // Apply sign
        if (negative)
            quotient = -quotient;

        return (int)quotient;
    }
};