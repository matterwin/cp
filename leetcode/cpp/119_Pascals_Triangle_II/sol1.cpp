#include <vector>
#include <utility>
class Solution
{
public:
    std::vector<int> getRow(int idx)
    {
        std::vector<std::vector<int>> ret;
        ret.reserve(idx + 1);

        for (int r = 0; r <= idx; ++r)
        {
            std::vector<int> row(r + 1, 1);
            for (int i = 1; i < r; ++i)
                row[i] = ret[r - 1][i] + ret[r - 1][i - 1];
            if (r == idx)
                return row;
            ret.push_back(std::move(row));
        }
        return {};
    }
};

// 1
// 1 1
// 1 2 1
