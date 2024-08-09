class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int cnt=0;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<=r-3;i++){
            for(int j=0;j<=c-3;j++){
                if(isMagic(grid,i,j))
                    cnt++;
            }
        }
        return cnt;
    }
    bool isMagic(vector<vector<int>>&grid, int r, int c){
        unordered_set<int>st;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int num=grid[r+i][c+j];
                if(num<1 ||num>9 ||st.count(num)){
                    return false;
                }
                else{
                    st.insert(num);
                }
            }
        }
        int sum=0;
        sum=grid[r][c]+grid[r][c+1]+grid[r][c+2];
        for(int i=0;i<3;i++){
                if(grid[r+i][c]+grid[r+i][c+1]+grid[r+i][c+2]!=sum)
                    return false;
                if(grid[r][c+i]+grid[r+1][c+i]+grid[r+2][c+i]!=sum)
                    return false;
        }
            if(grid[r][c]+grid[r+1][c+1]+grid[r+2][c+2]!=sum)
                    return false;
            if(grid[r][c+2]+grid[r+1][c+1]+grid[r+2][c]!=sum)
                    return false;
        return true;
    }
};