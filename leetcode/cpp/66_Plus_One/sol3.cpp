#include <vector>
class Solution
{
public:
    std::vector<int> plusOne(std::vector<int> digits)
    {
        int n = static_cast<int>(digits.size());
        for (int i = n - 1; i >= 0; --i)
        {
            ++digits[i];
            if (digits [i] != 10)
                return digits;
            digits[i] = 0; 
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
