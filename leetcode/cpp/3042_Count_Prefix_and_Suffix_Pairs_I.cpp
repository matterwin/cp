#include <vector>
#include <string>
using namespace std;

class Solution 
{
public:
	bool isPreAndSuf(string w1, string w2)
	{
		int n1 = w1.length(), n2 = w2.length();
		if (n1 > n2) return false;

		for (int i = 0; i < n1; ++i) {
			if (w1[i] != w2[i]) return false;
		}

		int j = n2 - 1;
		for (int i = n1 - 1; i >= 0; --i) {
			if (w1[i] != w2[j--]) return false;
		}

		return true;
	}
	int countPrefixSuffixPairs(vector<string> words)
	{
		int pairs = 0;
		for (int i = 0; i < words.size(); ++i) 
		{
			for (int j = i + 1; j < words.size(); ++j) 
			{
				if (isPreAndSuf(words[i], words[j]))	
					++pairs;
			}
		}
		return pairs;
	}
};

class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                if (words[i].size() > words[j].size())
                    continue;

                int len = words[i].size();

                if (words[j].substr(0, len) == words[i] &&
                    words[j].substr(words[j].size() - len) == words[i]) {
                    ans++;
                }
            }
        }

        return ans;
    }
};
