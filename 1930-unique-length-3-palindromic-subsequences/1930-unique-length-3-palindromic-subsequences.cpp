class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<pair<int,int>>v(26,{-1,-1});
        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]-'a'].first==-1)
            v[s[i]-'a'].first=i;
            else
            v[s[i]-'a'].second=i;
        }
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(v[i].first!=-1&&v[i].second!=-1)
            {
                int a=v[i].first,b=v[i].second;
                vector<int>vis(26);
                for(int j=a+1;j<b;j++)
                {
                    if(vis[s[j]-'a']==0)
                    {
                        vis[s[j]-'a']=1;
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};