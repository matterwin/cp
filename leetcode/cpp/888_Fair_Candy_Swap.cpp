#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aboxes, vector<int>& bboxes) {
        int sumA = 0, sumB = 0;

        for (int x : aboxes) sumA += x;
        for (int x : bboxes) sumB += x;

		// sumA - a + b = sumB - b + a
		// sumA - sumB = 2a - 2b
		// sumA - sumB = 2(a - b)
		// a - b = (sumA - sumB) / 2
		// i.e. our difference in order to balance

        int diff = (sumA - sumB) / 2;

        unordered_set<int> setB(bboxes.begin(), bboxes.end());

		// using the math above
		// say diff = (sumA - sumB) / 2
		// then b = a - diff
        for (int a : aboxes) {
            int b = a - diff;
            if (setB.count(b)) {
                return {a, b};
            }
        }

        return {};
    }
};
