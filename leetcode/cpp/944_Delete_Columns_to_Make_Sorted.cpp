#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int rows = strs.size();
        int cols = strs[0].size();

        int deletions = 0;

        for (int col = 0; col < cols; ++col) {
            for (int row = 1; row < rows; ++row) {
                if (strs[row - 1][col] > strs[row][col]) {
                    ++deletions;
                    break;
                }
            }
        }

        return deletions;
    }
};
