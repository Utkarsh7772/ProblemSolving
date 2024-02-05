class Solution {
public:
    bool rotateString(string s, string goal) {
            int n=s.size();
        bool ans=false;
        for(int i=0;i<n;i++)
        {
       string rotated = s.substr(i) + s.substr(0, i);
            if(rotated==goal)
            {
                ans=true;
            }
        }
        return ans;
    }
};