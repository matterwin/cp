#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    double getArea(const vector<int>& a,
                   const vector<int>& b,
                   const vector<int>& c) {
        return abs(
            a[0] * (b[1] - c[1]) +
            b[0] * (c[1] - a[1]) +
            c[0] * (a[1] - b[1])
        ) / 2.0;
    }

    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double max_area = 0.0;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    max_area = max(
                        max_area,
                        getArea(points[i], points[j], points[k])
                    );
                }
            }
        }

        return max_area;
    }
};
