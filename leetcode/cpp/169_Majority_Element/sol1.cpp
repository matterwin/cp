#include <vector>
class Solution
{
public:
    int majorityElement(std::vector<int>& nums)
    {
        int count = 0;
        int elem = 0;
        
        for (const int& n : nums)
        {
            if (count == 0) elem = n;
            if (n == elem) ++count;
            else --count;
        }
        
        return elem;
    }
};
