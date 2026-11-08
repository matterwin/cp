class Solution
{
public:
    int islandPerimeter(std::vector<std::vector<int>>& grid)
    {
        constexpr int dirx[4] = {-1, 1, 0, 0};
        constexpr int diry[4] = {0, 0, -1, 1};

        int ret = 0;
        int rows = static_cast<int>(grid.size());
        int cols = static_cast<int>(grid[0].size());

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                if (grid[i][j] == 1)
                {
                    ret += 4;

                    for (int k = 0; k < 4; ++k)
                    {
                        int nx = i + dirx[k];
                        int ny = j + diry[k];

                        if (nx >= 0 && nx < rows &&
                            ny >= 0 && ny < cols &&
                            grid[nx][ny] == 1)
                        {
                            --ret;
                        }
                    }
                }
            }
        }

        return ret;
    }
};