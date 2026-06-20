class Solution {
public:
	bool checkPerfectNumber(int num) {
		int sum = 0;
		for (int i = 1; i * i < num; ++i) {
			int into = num / i;
			if (num % i == 0) {
                if (into == num) into = 0;
				sum += (i + into);	
			}
		}
		return sum == num;
	}
};

