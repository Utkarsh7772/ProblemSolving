class Solution {
public:
    int expand_around_center(string s, int left, int right) {
	int L = left, R = right;
	while (L >= 0 && R < s.size() && s[L] == s[R]) {
		L--;
		R++;
	}
	return R - L - 1;
}

string longestPalindrome(string s) {
	if (s.length() < 1) return "";
	int start = 0, end = 0;
	for (int i = 0; i < s.size(); i++) {
		int len1 = expand_around_center(s, i, i);
		int len2 = expand_around_center(s, i, i + 1);
		int len = max(len1, len2);
		if (len > end - start) {
			start = i - (len - 1) / 2;
			end = i + len / 2;
		}
	}
	return s.substr(start, end - start + 1);
    }
};