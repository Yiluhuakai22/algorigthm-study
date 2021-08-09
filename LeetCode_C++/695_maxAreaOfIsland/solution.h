#include <vector>
#include <algorithm>
using std::max;
using std::vector;

class Solution
{
public:
    vector<int> direction{-1, 0, 1, 0, -1};
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int max_area = 0, row = grid.size(), col = grid[0].size();
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == 1)
                {
                    max_area = max(max_area, dfs(grid, i, j));
                }
            }
        }
        return max_area;
    }

    int dfs(vector<vector<int>> &grid, int r, int c)
    {
        if (grid[r][c] == 0)
        {
            return 0;
        }
        grid[r][c] = 0;
        int x, y, area = 1, row = grid.size(), col = grid[0].size();
        for (int i = 0; i < 4; i++)
        {
            x = r + direction[i], y = c + direction[i + 1];
            if (x >= 0 && x < row && y >= 0 && y < col)
            {
                area += dfs(grid, x, y);
            }
        }
        return area;
    }
};