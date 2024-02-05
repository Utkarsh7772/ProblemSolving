class Solution {
public:
    int firstUniqChar(string s) {
        int ans=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s.find(s.at(i))==s.rfind(s.at(i)))
            {
               ans=i;
            break;
            }
                
            else
                continue;
        }
               return ans;
    }
};