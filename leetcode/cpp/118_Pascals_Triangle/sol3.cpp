#include <vector>
#include <utility>

class Solution 
{
public:
    std::vector<std::vector<int>> generate(int rows) 
    {
        std::vector<std::vector<int>> ret;
        ret.reserve(rows);

        for (int r = 0; r < rows; ++r) 
        {
            std::vector<int> row(r + 1, 1);

            for (int i = 1; i < r; ++i)
                row[i] = ret[r - 1][i] + ret[r - 1][i - 1];

            ret.push_back(std::move(row));
        }

        return ret;
    }
};
