class Solution {
public:
    void dfs(vector<vector<int>>& newgrid,int i, int j){
        if(i<0 || i>= newgrid.size() || j<0 || j>=newgrid.size()){
            return;
        }
        if(newgrid[i][j] == 0){
            return;
        }
        newgrid[i][j] = 0;
        dfs(newgrid,i+1,j);
        dfs(newgrid,i,j+1);
        dfs(newgrid,i-1,j);
        dfs(newgrid,i,j-1);
    }
    int findisland(vector<vector<int>>& newgrid){
        int n = newgrid.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(newgrid[i][j] == 1){
                    dfs(newgrid,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
    int regionsBySlashes(vector<string>& grid) {
        int n = grid.size();
        vector<vector<int>> newgrid(n*3,vector<int>(n*3,1));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '/'){
                    newgrid[i*3][j*3+2] = 0;
                    newgrid[i*3+2][j*3] = 0;
                    newgrid[i*3+1][j*3+1] = 0;
                }else if(grid[i][j] == '\\'){
                    newgrid[i*3][j*3] = 0;
                    newgrid[i*3+1][j*3+1] = 0;
                    newgrid[i*3+2][j*3+2] = 0;
                }
            }
        }
        return findisland(newgrid);
    }
};