class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> ans;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" &&
                tokens[i] != "*" && tokens[i] != "/") {

                ans.push(stoi(tokens[i]));
            }
            else {
                int b = ans.top();
                ans.pop();

                int a = ans.top();
                ans.pop();

                if (tokens[i] == "+")
                    ans.push(a + b);
                else if (tokens[i] == "-")
                    ans.push(a - b);
                else if (tokens[i] == "*")
                    ans.push(a * b);
                else if (tokens[i] == "/")
                    ans.push(a / b);
            }
        }

        return ans.top();
    }
};