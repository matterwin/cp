#include <vector>
using namespace std;
class Solution {
public:
	vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
		int m = (int) img.size(), n = (int) img[0].size();

		constexpr int dx[8] = {1, -1, 0, 0, 1, -1, 1, -1};
		constexpr int dy[8] = {0, 0, 1, -1, 1, 1, -1, -1};

		vector<vector<int>> ret(m, vector<int>(n, 0));

		for (int x = 0; x < m; ++x) {
			for (int y = 0; y < n; ++y) {
				int values = img[x][y];
				int tot = 1;

                // kernel
				for (int k = 0; k < 8; ++k) {
					int nx = x + dx[k];
					int ny = y + dy[k];

					if (nx < 0 || ny < 0 || nx == m || ny == n) continue;

					values += img[nx][ny];
					++tot;
				}

				ret[x][y] = values / tot;
			}
		}
		
		return ret;
	}
};

