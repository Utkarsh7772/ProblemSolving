class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        unordered_map<char, int> freqMap;
        for (char c : word) {
            freqMap[c]++;
        }
        vector<pair<int, char>> freqVec;
        for (const auto& entry : freqMap) {
            freqVec.push_back({entry.second, entry.first});
        }
        sort(freqVec.rbegin(), freqVec.rend());

        int pushes = 0;
        for (int i = 0; i < freqVec.size(); ++i) {
            pushes += freqVec[i].first * ((i / 8) + 1);
        }

        return pushes;
    }
};