#include <vector>
#include <algorithm>
using namespace std;
class Solution 
{
public:
	int largestPerimeter(vector<int>& nums) 
	{
		sort(nums.begin(), nums.end());
        int n = nums.size();
		while (n >= 3) 
		{
			int ab = nums[n - 2] + nums[n - 3];
			int c = nums[n - 1];

			if (ab > c) return ab + c;
			--n;
		}
		return 0;
	}
};

