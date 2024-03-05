class Solution {
public:
    int minimumLength(string s) 
    {
    int l=0,r=s.size()-1;
        while (l<r && s[l]==s[r]){
            while(l+1<r && s[l]==s[l+1]) 
                l++;
            while(r-1>l && s[r]==s[r-1]) 
                r--;
            l++;
            r--;
        }
        return (l<=r?(r-l+1):0);
    }
};