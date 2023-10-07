class Solution {
public:
    vector<string> generateParenthesis(int n) {
       vector<string> result;
        string current;
        generateParentheses(result, current, n, n);
        return result;
    }

private:
    void generateParentheses(vector<string>& result, string& current, int left, int right) {
        if (left == 0 && right == 0) {
            result.push_back(current);
            return;
        }

        if (left > 0) {
            current.push_back('(');
            generateParentheses(result, current, left - 1, right);
            current.pop_back();
        }

        if (right > left) {
            current.push_back(')');
            generateParentheses(result, current, left, right - 1);
            current.pop_back();
        }
    }
};
