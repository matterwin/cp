#include <vector>
#include <algorithm>

class Solution 
{
public:
    int maxProfit(std::vector<int>& prices) 
    {
        int minPrice = INT_MAX;
        int profit = 0;

        for (int price : prices) 
        {
            minPrice = std::min(minPrice, price);
            profit = std::max(profit, price - minPrice);
        }

        return profit;
    }
};

