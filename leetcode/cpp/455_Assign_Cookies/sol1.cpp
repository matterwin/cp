class Solution
{
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s)
    {
        sort(g.begin(), g.end()); 
        sort(s.begin(), s.end());

        int ret = 0;
        int gi = 0, si = 0;
        while (si < s.size() && gi < g.size())
        {
            if (s[si++] >= g[gi])
            {
                ++gi;
                ++ret;
            }
        }
        return ret;
    }
};
