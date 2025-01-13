class Solution {
public:
    bool canBeValid(string s, string locked) {
        if (s.length() % 2 != 0) return false;

        vector<int> openings;
        vector<int> unlocked;

        for (int i = 0; i < s.length(); i++) {
            if (locked[i] == '0') {
                unlocked.push_back(i);
            } else if (s[i] == '(') {
                openings.push_back(i);
            } else { // s[i] == ')'
                if (!openings.empty()) {
                    openings.pop_back();
                } else if (!unlocked.empty()) {
                    unlocked.pop_back();
                } else {
                    return false;
                }
            }
        }

        while (!openings.empty() && !unlocked.empty()) {
            if (unlocked.back() < openings.back()) {
                return false;
            }
            unlocked.pop_back();
            openings.pop_back();
        }

        return openings.empty() && unlocked.size() % 2 == 0;
    }
};