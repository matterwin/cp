#include <vector>
using namespace std;

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int len = (int)arr.size();
        int ret = 0;

        vector<int> prefix(len + 1, 0);

        for (int i = 0; i < len; ++i)
            prefix[i + 1] = prefix[i] ^ arr[i];

        for (int i = 0; i < len; ++i) {
            for (int k = i + 1; k < len; ++k) {
                if (prefix[i] == prefix[k + 1])
                    ret += k - i;
            }
        }

        return ret;
    }
};
