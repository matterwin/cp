#include <vector>
#include <cstdint>
#include <climits>
class Solution 
{
public:
    int thirdMax(std::vector<int>& nums)
    {
        int64_t fMax = INT64_MIN;
        int64_t sMax = INT64_MIN;
        int64_t tMax = INT64_MIN;

        for (int n : nums)
        {
            if (n > fMax)
            {
                tMax = sMax;
                sMax = fMax;
                fMax = n;
            }
            else if (n > sMax && n != fMax)
            {
                tMax = sMax;
                sMax = n;
            }
            else if (n > tMax && n != sMax && n != fMax)
            {
                tMax = n;
            }
        }

        return tMax == INT64_MIN ? fMax : tMax;
    }
};