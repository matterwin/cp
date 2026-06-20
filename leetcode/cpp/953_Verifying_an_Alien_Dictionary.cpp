#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> mp;

        for (int i = 0; i < order.size(); ++i)
            mp[order[i]] = i;

        auto lessEq = [&](const string& a, const string& b) {
            int i = 0, j = 0;

            while (i < a.size() && j < b.size()) {
                if (a[i] != b[j]) {
                    return mp[a[i]] < mp[b[j]];
                }
                ++i;
                ++j;
            }

            return a.size() <= b.size();
        };

        for (int i = 1; i < words.size(); ++i) {
            if (!lessEq(words[i - 1], words[i]))
                return false;
        }

        return true;
    }
};
