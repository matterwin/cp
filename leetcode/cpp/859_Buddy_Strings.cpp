#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length()) return false;

        if (s == goal) {
            unordered_set<char> st(s.begin(), s.end());
            return st.size() < s.size(); // duplicate exists
										 // so we can do a nothing swap
        }

        vector<int> diff;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                diff.push_back(i);
            }
        }

		// more than 1 swap is needed
        if (diff.size() != 2) return false;

        return s[diff[0]] == goal[diff[1]] &&
               s[diff[1]] == goal[diff[0]];
    }
};
