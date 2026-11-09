class Solution {
public:
    string multiply(string num1, string num2) {

        int m = num1.size();
        int n = num2.size();

        vector<int> res(m + n, 0);

        for (int i = m - 1; i >= 0; i--) {

            for (int j = n - 1; j >= 0; j--) {

                int a = num1[i] - '0';
                int b = num2[j] - '0';

                int mul = a * b;

                int sum = mul + res[i + j + 1];

                res[i + j + 1] = sum % 10;

                res[i + j] += sum / 10;
            }
        }

        string ans = "";

        int i = 0;

        while (i < res.size() && res[i] == 0) {
            i++;
        }

        while (i < res.size()) {
            ans += char(res[i] + '0');
            i++;
        }

        return ans.empty() ? "0" : ans;
    }
};