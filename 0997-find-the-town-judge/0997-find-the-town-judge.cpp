class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>>maps(n+1,{0,0});
        for(int i=0;i<trust.size();i++){
            int person=trust[i][0];
            int trustTo=trust[i][1];
            
            maps[person].first+=1;
            maps[trustTo].second+=1;
        }
        for(int i=1;i<=n;i++)
        {
            if(maps[i].first==0 && maps[i].second==n-1)
                return i;
        }
        return -1;
    }
};