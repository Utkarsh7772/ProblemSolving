class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
         vector<pair<string, int>> paired(names.size());
        
        for (int i = 0; i < names.size(); i++) {
            paired[i] = make_pair(names[i], heights[i]);
        }
        sort(paired.begin(), paired.end(), [](const pair<string, int>& p1, const pair<string, int>& p2) {
            return p1.second > p2.second;
        });
        for (int i = 0; i < paired.size(); i++) {
            names[i] = paired[i].first;
        }
        return names;
    }
};