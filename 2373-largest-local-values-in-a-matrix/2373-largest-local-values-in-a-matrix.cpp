class Solution {
public:
     static int maxElement(const vector<std::vector<int>>& grid, int row, int col) {
        int element = 0;
        for(int i = row; i < row + 3; i++) {
            for(int j = col; j < col + 3; j++) {
                element = max(element, grid[i][j]);
            }
        }
        return element;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        vector<vector<int>> localMatrix(n - 2, vector<int>(n - 2));
        for(int i = 0; i <= n - 3; i++) {
            for(int j = 0; j <= n - 3; j++) {
                localMatrix[i][j] = maxElement(grid, i, j);
            }
        }
        return localMatrix;
    }
};