class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        sort(strs.begin(),strs.end());
        int i=0;
        while(i<strs[0].length() && strs[0][i]==strs[strs.size()-1][i]){
           res+=strs[0][i]; 
            i++;
            
        }
        return res;
    }
};