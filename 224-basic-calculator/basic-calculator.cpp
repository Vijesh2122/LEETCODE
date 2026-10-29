class Solution {
public:
    int calculate(string s) {
        stack<long long> st;
        long long result = 0, num = 0, sign = 1;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            else if (c == '+') {
                result += sign * num;
                num = 0;
                sign = 1;
            }
            else if (c == '-') {
                result += sign * num;
                num = 0;
                sign = -1;
            }
            else if (c == '(') {
                st.push(result);
                st.push(sign);

                result = 0;
                sign = 1;
            }
            else if (c == ')') {
                result += sign * num;
                num = 0;

                result *= st.top();
                st.pop();

                result += st.top();
                st.pop();
            }
        }

        result += sign * num;

        return static_cast<int>(result);
    }
};