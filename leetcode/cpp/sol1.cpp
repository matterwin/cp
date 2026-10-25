#include <vector>
class Solution 
{
public:
    int maxProfit(std::vector<int>& prices)
    {
        if (prices.size() == 1) return 0;
        int maxProfit = 0;  
        int stock = INT_MAX;

        for (int& p : prices)
        {
            if (p <= stock)
                stock = p;
            else
                maxProfit = max(maxProfit, p - stock);
        }
        
        return maxProfit;
    }
};