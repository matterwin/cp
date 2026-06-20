#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int numSplits(string s) {
        int len = s.size();

        int prefix[26];
		memset(prefix, 0, sizeof(prefix));

        for (int i = 0; i < len; ++i) {
            prefix[i + 1] = prefix[i] | (1 << (s[i] - 'a'));
        }

        int postfix[26];
		memset(prefix, 0, sizeof(prefix));

        for (int i = len - 1; i >= 0; --i) {
            postfix[i] = postfix[i + 1] | (1 << (s[i] - 'a'));
        }

        int ret = 0;
        for (int i = 1; i < len; ++i) {
            if (__builtin_popcount(prefix[i]) ==
                __builtin_popcount(postfix[i])) {
                ++ret;
            }
        }

        return ret;
    }
};

// faster but no bit manip
#include <string>
using namespace std;

class Solution {
public:
    int numSplits(string s) {
        int rightCnt[26] = {0}, leftCnt[26] = {0};

        for (char c : s)
            rightCnt[c - 'a']++;

        int leftDistinct = 0, rightDistinct = 0;

        for (int i = 0; i < 26; ++i)
            if (rightCnt[i]) rightDistinct++;

        int ans = 0;

        for (int i = 0; i < (int)s.size() - 1; ++i) {
            int c = s[i] - 'a';

            if (++leftCnt[c] == 1)
                leftDistinct++;

            if (--rightCnt[c] == 0)
                rightDistinct--;

            if (leftDistinct == rightDistinct)
                ans++;
        }

        return ans;
    }
};
