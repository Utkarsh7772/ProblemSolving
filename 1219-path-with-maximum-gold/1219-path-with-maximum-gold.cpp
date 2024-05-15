class Solution {
    vector<vector<bool>> visited;
    vector<vector<int>> grid;
    int rows, cols;

    bool isValid(int i, int j) {
        return i >= 0 && j >= 0 && i < rows && j < cols && grid[i][j] > 0;
    }

    int dfs(int i, int j) {
        visited[i][j] = true;
        int maxGold = 0;

        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        for (auto [x, y] : directions) {
            int newX = i + x, newY = j + y;
            if (isValid(newX, newY) && !visited[newX][newY]) {
                maxGold = max(maxGold, dfs(newX, newY));
            }
        }

        visited[i][j] = false;  
        return maxGold + grid[i][j];
    }

public:
    int getMaximumGold(vector<vector<int>>& inputGrid) {
        grid = inputGrid;
        rows = grid.size();
        cols = grid[0].size();
        visited = vector<vector<bool>>(rows, vector<bool>(cols, false));

        int maximumGold = 0;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] > 0) {
                    maximumGold = max(maximumGold, dfs(i, j));
                }
            }
        }

        return maximumGold;
    }
};