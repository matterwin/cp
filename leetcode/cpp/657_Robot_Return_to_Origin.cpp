#include <string>
using namespace std;
class Solution {
public:
	bool judgeCircle(string moves) {
		int freq[256];
		memset(freq, 0, sizeof(freq));

		for (char c : moves) ++freq[c];

		bool opp_x = freq['L'] == freq['R'];
		bool opp_y = freq['U'] == freq['D'];

		return opp_x && opp_y;
	}
};

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;

        for (char c : moves) {
            if (c == 'L') --x;
            else if (c == 'R') ++x;
            else if (c == 'U') ++y;
            else if (c == 'D') --y;
        }

        return x == 0 && y == 0;
    }
};
