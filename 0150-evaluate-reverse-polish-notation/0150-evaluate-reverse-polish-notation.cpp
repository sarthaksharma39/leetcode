class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res; // Use a stack to store intermediate results
        int n = tokens.size();

        for (int i = 0; i < n; i++) {
            if (isOperator(tokens[i])) {
                int operand2 = res.top(); res.pop();
                int operand1 = res.top(); res.pop();
                
                int result;
                if (tokens[i] == "+") {
                    result = operand1 + operand2;
                } else if (tokens[i] == "-") {
                    result = operand1 - operand2;
                } else if (tokens[i] == "*") {
                    result = operand1 * operand2;
                } else if (tokens[i] == "/") {
                    result = operand1 / operand2;
                }
                
                res.push(result); // Push the result back onto the stack
            } else {
                res.push(stoi(tokens[i])); // Push operands onto the stack
            }
        }

        return res.top();
    }

private:
    bool isOperator(const string& token) {
        return token == "+" || token == "-" || token == "*" || token == "/";
    }
};
