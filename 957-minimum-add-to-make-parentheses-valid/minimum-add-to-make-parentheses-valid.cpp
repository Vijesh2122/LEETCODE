class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance = 0;
        int additions = 0;

        for (char c : s) {

            if (c == '(') {
                balance++;
            }
            else {
                if (balance > 0) {
                    balance--;
                }
                else {
                    // Need to insert '(' before this ')'
                    additions++;
                }
            }
        }

        // Remaining '(' need matching ')'
        additions += balance;

        return additions;
    }
};