#include <vector>
class Solution
{
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2)
    {
        int mp[1001];
        memset(mp, 0, sizeof(int) * 1001);
        for (auto& n : nums1) mp[n] = 1;
        for (auto& n : nums2) 
        {
            if (mp[n] == 1)
                mp[n] = 2;
        }

       std::vector<int> ret;
       for (int i = 0; i <= 1000; ++i)
           if (mp[i] == 2)
               ret.push_back(i);
       return ret;
    }
};