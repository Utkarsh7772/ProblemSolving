class Solution {
public:
    bool checkAllElementsIn2(vector<int>& target, vector<int>& arr) {
        vector<int> freq(1001, 0);
        int m = 0;
        for (int i = 0; i < target.size(); i++) {
            freq[target[i]]++;
            freq[arr[i]]--;
            m = max(m, max(target[i], arr[i]));
        }
        for (int i = 1; i <= m; i++) {
            if (freq[i] != 0) return false;
        }
        return true;
    }
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        return checkAllElementsIn2(target, arr);
        
    }
};