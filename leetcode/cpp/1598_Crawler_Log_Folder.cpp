#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int level = 0;

        for (const string& s : logs) {
            if (s[0] == '.') {
                if (s[1] == '.') {
                    if (level > 0) --level;
                }
            } else {
                ++level;
            }
        }

        return level;
    }
};
