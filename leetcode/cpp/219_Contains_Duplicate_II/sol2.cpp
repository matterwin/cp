class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<int> v = nums;
        sort(v.begin(),v.end());
        for(size_t i = 1;i<v.size();i++)
        {
            if(v.at(i)==v.at(i-1))
            {
                long int mark = -1;
                for(size_t j=0 ; j < nums.size() ; ++j)
                {
                    if(nums.at(j)==v.at(i)&&mark==-1)
                        mark = j;
                    else if( nums.at(j)==v.at(i) && (j-mark)<=k )
                        return true;
                    else if(nums.at(j)==v.at(i) && (j-mark) > k)
                        mark = j;
                }
            }

        }
        return false;
    }
};