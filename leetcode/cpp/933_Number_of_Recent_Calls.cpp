#include <vector>
using namespace std;

class RecentCounter {
private:
    vector<int> pings;

public:
    int ping(int t) {
        pings.push_back(t);

        int target = t - 3000;

        int l = 0, r = pings.size() - 1;
        int ans = pings.size();

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (pings[mid] >= target) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return pings.size() - ans;
    }
};

#include <queue>
using namespace std;
class RecentCounter {
private:
	queue<int> q;
public:
	int ping(int t) {
		q.push(t);

		int start = t - 3000;

		// q.front() is the oldest
		// stop when oldest hits our start time or goes past it
		while (!q.empty() && q.front() < start) q.pop();

		return q.size();
	}
};
