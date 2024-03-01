class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                c++;
            }
        }
        string ans="";
        for(int i=0;i<s.size()-1;i++)
        {
            if(i<c-1)
            {
                ans=ans+"1";
            }
            else
            {
                ans=ans+"0";
            }
        }
        ans=ans+"1";
        return ans;
    }
};