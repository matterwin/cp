#include <string>
using namespace std;
class Solution
{
public:
	int maxDepth(string s)
	{
		int cnt = 0;
		int max_nest = 0;
		for (char c : s) 
		{
			if (c == '(') ++cnt;
			else if (c == ')') --cnt;

			max_nest = max(max_nest, cnt);
		}
		return max_nest;
	}
};


