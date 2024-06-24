class Solution {
public:
    bool rotateString(string s, string goal) {
        bool ans=false;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            string rotate=s.substr(i)+s.substr(0,i);
            if(rotate == goal)
                ans=true;
        }
        return ans;
    }
};