#include <vector>
class Solution
{
public:
    std::vector<int> plusOne(std::vector<int> digits)
    {
        int n = static_cast<int>(digits.size());
        int carry_over = 0;
        ++digits[n - 1];
        carry_over = (digits[n - 1] == 10);
        digits[n - 1] %= 10;
        if (carry_over == 0)
            return digits;
        for (int i = n - 2; i >= 0; --i)
        {   
            digits[i] += carry_over;
            carry_over = (digits[i] == 10);
            if (carry_over == 0)
                return digits;
            digits[i] %= 10;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};