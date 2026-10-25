class Solution 
{
public:
    bool containsDuplicate(std::vector<int> nums)
    {
        std::unordered_set<int> st;
        for (int& n : nums) 
        {
            if (st.find(n) != st.end()) return true;
            st.insert(std::move(n));
        }
        return false;
    }
};
