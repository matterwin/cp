#include <vector>
#include <cstring>
using namespace std;

class Solution {
public:
	int gcd(int a, int b) {
		while (b != 0) {
			int r = a % b;
			a = b;
			b = r;
		}
		return a;
	}
    bool hasGroupsSizeX(vector<int>& deck) {
        int freq[10001];
        memset(freq, 0, sizeof(freq));

        for (int n : deck)
            ++freq[n];

        int g = 0;

        for (int f : freq) {
            if (f == 0) continue;
            g = gcd(g, f);
        }

        return g >= 2;
    }
};
