#include <vector>
class Solution
{
public:
    int searchInsert(std::vector<int> a, int target)
    {
        int l = 0, r = static_cast<int>(a.size() - 1);
        while (l <= r)
        {
            int mid = l + (r - l) / 2; 
            if (a[mid] == target)
                return mid;
            if (a[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return l;
    }
};