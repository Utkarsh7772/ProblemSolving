class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
    string result = "";
    int i = 0;

    while (i < n) {
        while (i < n && s[i] == ' ') {
            i++;
        }
        string word = "";
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }
        if (!word.empty()) {
            if (!result.empty()) {
                result = " " + result; 
            }
            result = word + result;
        }
    }

    return result;
    }
};