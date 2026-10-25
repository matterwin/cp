class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        size_t cap = 1;
        while(cap < n * 4 ) cap <<= 1;
        size_t mask = cap - 1;
        vector<int> table(cap);
        vector<char> mark(cap,0);
        for(auto &a : nums)
        {
            int index = ((uint32_t)a * (2654435789u)) & mask;
            while (mark[index]) 
            {
                if (table[index] == a) return true;
                index = (index + 1) & mask;
            }

            mark[index] = 1;
            table[index]= a;
        }
        return false;
    }

};
