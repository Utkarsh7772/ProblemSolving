class Solution {
public:
     string frequencySort(string s) {
    if (s.size() < 2) 
        return s;
    unordered_map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }
    map<int, vector<char>> count;
    for (auto it : mp) {
        count[it.second].push_back(it.first);
    }
    string result = "";
    for (auto it = count.rbegin(); it != count.rend(); ++it) {
        for (char c : it->second) {
            result.append(it->first, c);
        }
    }
    return result;
    }
};