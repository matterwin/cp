#include <string>
using namespace std;
class Solution {
public:
	int minDistance(string word1, string word2) {
		if (word1 == word2) return 0;

		int m = word1.size(), n = word2.size();

		vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
		// dp[i][j] = length of LCS (Longest Common Subsequence)
		// between word1[0..i-1] and word2[0..j-1]

		// i = how many characters we are taking from word1 (prefix length)
		// j = how many characters we are taking from word2 (prefix length)

		// so:
		// dp[0][*] = 0  -> empty word1 prefix
		// dp[*][0] = 0  -> empty word2 prefix
		
		// word1 = "sea"
		// word2 = "eat"
		// dp[1][*] is all 0 if 's' never appears in word2

		for (int i = 1; i <= m; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (word1[i - 1] == word2[j - 1])
					dp[i][j] = dp[i - 1][j - 1] + 1; // seq matches, increase count
				else 
					dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
		}

		// (m - k) + (n - k) = m + n - 2k
		return m + n - 2 * dp[m][n];
	}
};


// at each step we are given a choice:
// 1. match current chars
// word1[i - 1] == word2[j - 1]
//
// 2. skip chars
// dp[i - 1][j]
// dp[i][j - 1]
//
// i reps the chars we take from word1
// j reps the chars we take from word2
// (we dont care the actual chars just the number ?)

// we are considering indices 0 through i-1 in word1
// and indices 0 through j-1 in word2

// i = length of prefix of word1 we are considering (characters 0 to i-1)
// j = length of prefix of word2 we are considering (characters 0 to j-1)
// (not necessarily prefix meaning not a subsequence or substring)
// i is a length boundary, not a last index.


// dp[i][j]
// means:

// the maximum length of a common subsequence
// between:

// word1[0..i-1]
// word2[0..j-1]








// or 
class Solution{
public:
    int minDistance(const string& w1, const string& w2)
    {
        int m = (int) w1.size();
        int n = (int) w2.size();
        int dp[n + 1]; // this bullshit is compiler specific (works on clang)
        memset(dp, 0, sizeof(dp));

        for (int i = 1; i <= m; i++)
        {
            int b = 0;
            int c;
            for (int j = 1; j <= n; j++)
            {
                c = dp[j];
                if (w1[i - 1] == w2[j - 1])
                    dp[j] = b + 1;
                else
                    dp[j] = max(dp[j - 1], dp[j]);
                b = c;
            }
        }
        return m + n - 2 * dp[n];
    }
};
