class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int dir = 0, steps = 0;
        std::vector<std::vector<int>> coord = {{rStart, cStart}};
        int direction[][4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        while (coord.size() < rows * cols)
        {
            if (dir == 0 || dir == 2) 
                ++steps;
            for (unsigned int i = 0; i < steps; ++i)
            {
                rStart = rStart + direction[dir][0];
                cStart = cStart + direction[dir][1];
                if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols)
                    coord.push_back({rStart, cStart});
                if (coord.size() == rows * cols)
                    return coord;
            }
            dir = (dir + 1) % 4;
        }
        return coord;
    }
};