#include <string>
using namespace std;
class Solution {
public:
	char kthCharacter(int k) {
		string s = "a";
		while ((int)s.length() < k) {
			int len = s.length();
			for (int i = 0; i < len; ++i) {
				char next = (s[i] == 'z') ? 'a' : s[i] + 1;
				s.push_back(next);
			}
		}
		return s[k - 1];
	}
};

class Solution {
public:
    char solve(long long k) {
        if(k == 1) return 'a';

        long long len = 1;

        while(len < k) len *= 2;

        long long half = len / 2;

        if(k <= half) return solve(k);

        char ch = solve(k - half);

        return (ch == 'z') ? 'a' : ch + 1;
    }
    char kthCharacter(int k) {
        return solve(k);
    }
};
