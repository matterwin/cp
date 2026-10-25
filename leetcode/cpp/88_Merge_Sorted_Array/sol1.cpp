class Solution
{
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (i >= 0 && j >= 0)
        {
            int n1 = nums1[i], n2 = nums2[j];
            if (n1 > n2)
            {
                nums1[k--] = n1;
                --i;
            }
            else
            {
                nums1[k--] = n2;
                --j;
            }
        }

        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
};












