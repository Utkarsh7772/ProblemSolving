class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});
        
        int result=0;
        int n=s.length();
         for (int i = 0; i < n; ++i) {
            if (i == n - 1 || mp[s[i]] >= mp[s[i + 1]]) {
                result += mp[s[i]];
            } else {
                result -= mp[s[i]];
            }
        }
        
        return result;
    }
};