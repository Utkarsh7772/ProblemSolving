class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
         vector<int>store(s.size() + 1, 0);
        for(int i = 0; i < shifts.size(); i++){
            int direct = (shifts[i][2] == 1) ? 1 : -1;
            store[shifts[i][0] + 1] += direct;
            if(shifts[i][1] + 2 <= s.size()){
                store[shifts[i][1] + 2] -= direct;
            }
        }
        int currentShift = 0;
        for(int i = 0; i < s.size(); i++){
            currentShift += store[i + 1];  
            int tmp = (currentShift % 26 + 26) % 26;
            s[i] = 'a' + (s[i] - 'a' + tmp) % 26;
        }
        return s;
    }
};