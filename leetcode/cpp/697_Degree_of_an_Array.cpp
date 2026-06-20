#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq;

		// need to make sure max freq elem(s) in n set
		// is included in our "window", which entails
		// its first and last occurence.
        unordered_map<int, int> first;
        unordered_map<int, int> last;

        int deg = 0;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];

            if (!freq.count(x))
                first[x] = i;

            last[x] = i;
            freq[x]++;

            deg = max(deg, freq[x]);
        }

        int ans = INT_MAX;

        for (auto& [x, f] : freq)
            if (f == deg)
                ans = min(ans, last[x] - first[x] + 1);

        return ans;
    }
};

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int freq[50000];
        int first[50000];
        int last[50000];

		memset(freq, 0, sizeof(freq));
		memset(first, 0xff, sizeof(first));
		memset(last, 0xff, sizeof(last));

        int deg = 0;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];

            if (first[x] == -1)
                first[x] = i;

            last[x] = i;
            deg = max(deg, ++freq[x]);
        }

        int ans = INT_MAX;

        for (int x = 0; x < 50000; x++)
            if (freq[x] == deg)
                ans = min(ans, last[x] - first[x] + 1);

        return ans;
    }
};

