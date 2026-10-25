#include <vector>
class Solution {
public: 
    std::vector<std::vector<int>> generate(int rows)
    {
        std::vector<std::vector<int>> ret;
        for (int i = 0; i < rows; ++i) 
        {
            std::vector<int> row(i + 1);
            int res = 1;
            for (int j = 0; j <= i; ++j) 
            {
                row[j] = res;
                res = res * (i - j) / (j + 1);
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

