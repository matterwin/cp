class Solution
{
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2)
    {
        std::vector<int> ret;
        int freq[1001];
        memset(freq, 0, sizeof(int) * 1001);
        int mp[1001];
        memset(mp, 0, sizeof(int) * 1001);
        for (int& n : nums1) 
        {
            ++freq[n];
            mp[n] = 1;
        }

        int freq1[1001];
        memset(freq1, 0, sizeof(int) * 1001);

        for (int& n : nums2) 
        {
            ++freq1[n];
            if (mp[n] == 1)
                mp[n] = 2;
        }
        for (int i = 0; i < 1001; ++i)
        {
            if (mp[i] == 2)
            {
                for (int j = 0; j < min(freq[i], freq1[i]); ++j)
                    ret.push_back(i);
            }
        }
        return ret;
    }
};