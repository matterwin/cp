#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ret;
        int l = 0;

        for (int r = 0; r < s.size(); ++r) {
            if (r == s.size() - 1 || s[r] != s[r + 1]) {
                // we are at end of consec chars
                if (r - l + 1 >= 3) ret.push_back({l, r});
                
                l = r + 1;
            }
        }

        return ret;
	}
};

