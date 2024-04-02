class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s1=s.size();
        int s2=t.size();
        if(s1!=s2)
            return false;
        map<char,char>map;
        set<char>set;
        for(int i=0;i<s1;i++)
        {
            char c1=s[i];
            char c2=t[i];
            if(map.find(c1)!=map.end())
            {
                if(map[c1]!=c2)
                    return false;
            }
        else
        {
            if(set.find(c2)!=set.end())
                return false;
        map[c1]=c2;
        set.insert(c2);
        }
    }
    return true;
    }
};