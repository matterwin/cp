#include <vector>
#include <queue>
#include <functional>
class Solution 
{
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s)
    {
        std::priority_queue< int, std::vector<int>, std::greater<int>> 
            children, cookies;

        for (int x : g) children.push(x);
        for (int x : s) cookies.push(x);

        int ret = 0;
        while (!children.empty() && !cookies.empty()) 
        {
            if (cookies.top() >= children.top()) 
            {
                ++ret;
                cookies.pop();
                children.pop();
            } 
            else
                cookies.pop();
        }

        return ret;
    }
};
