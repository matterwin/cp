#include <vector>
class Solution {
public: 
    std::vector<std::vector<int>> generate(int rows)
    {
        std::vector<std::vector<int>> ret;
        for (int r = 0; r < rows; ++r) 
        {
            std::vector<int> row(r + 1);
            int len = row.size();
            for (int i = 0; i < len; ++i) 
            {
                if (i == 0 || i == len - 1)
                    row[i] = 1; 
                else
                    row[i] = ret[r - 1][i] + ret[r - 1][i - 1];
            }
            ret.push_back(row);
        }
        return ret;
    }
};

// 1
// 1 1
// 1 2 1
// 1 3 3 1