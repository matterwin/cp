class Solution 
{
public:
	int romanToInt(string s)
	{
		int ret = 0;
		int prev = INT_MAX;
		for (const char c : s)
		{
			int cur = 0;
			switch (c)
			{
				case 'I':
					cur = 1; break;
				case 'V':
					cur = 5; break;
				case 'X':
					cur = 10; break;
				case 'L':
					cur = 50; break;
				case 'C':
					cur = 100; break;
				case 'D':
					cur = 500; break;
				case 'M':
					cur = 1000;
			}

			ret += cur;

			if (prev < cur)
				ret -= (prev << 1);

			prev = cur;
		}
		return ret;
	}
};

