#include <vector>
using namespace std;
class Solution {
public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
		vector<vector<int>> mat2(r, vector<int> (c, 0));	

		size_t m = mat.size(), n = mat[0].size();
		if (r * c != m * n) return mat;

		int x = 0;
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				mat2[x / c][x % c] = mat[i][j];
				++x;
			}
		}

		return mat2;
	}
};
