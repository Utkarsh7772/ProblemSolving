class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n=land.size();
        int m=land[0].size();
        vector<vector<int>> ans;
        for(int r=0;r<n;r++)
        {
            for(int c=0;c<m;c++)
            {
                if(land[r][c])
                {
                    int r2=r,c2=c;
                for(r2=r;r2<n && land[r2][c];r2++)
                {
                    for(c2=c;c2<m && land[r2][c2];c2++)
                    {
                        land[r2][c2]=0;
                    }
                }
                ans.push_back({r,c,r2-1,c2-1});
            }
        }
        }
    return ans;
    }
};