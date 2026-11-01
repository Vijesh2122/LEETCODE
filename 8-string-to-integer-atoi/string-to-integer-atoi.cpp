class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int k = 1;
        int i = 0;

        // Skip leading spaces
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        // Handle sign
        if (i < s.size() && s[i] == '-') {
            k = -1;
            i++;
        }
        else if (i < s.size() && s[i] == '+') {
            i++;
        }

        // Convert digits
        while (i < s.size() && isdigit(s[i])) {

            ans = ans * 10 + (s[i] - '0');

            if (k * ans >= INT_MAX)
                return INT_MAX;

            if (k * ans <= INT_MIN)
                return INT_MIN;

            i++;
        }

        return k * ans;
    }
};