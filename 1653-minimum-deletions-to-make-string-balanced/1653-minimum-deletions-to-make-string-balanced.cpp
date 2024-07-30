class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int l[n];
        int r[n];
        l[0]=0;
        for(int i=1;i<n;i++)
        {
            l[i]=l[i-1];
            l[i]+=(s[i-1]=='b')? 1:0;
        }
        r[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            r[i]=r[i+1];
            r[i]+=(s[i+1]=='a')? 1:0;
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ans=min(ans,l[i]+r[i]);
        }
        return ans;
    }
};