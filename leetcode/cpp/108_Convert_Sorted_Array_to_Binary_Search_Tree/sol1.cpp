class Solution 
{
public:
    TreeNode* part(std::vector<int>& nums, int left, int right)
    {
        if (left > right) return nullptr;

        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = part(nums, left, mid - 1);
        root->right = part(nums, mid + 1, right);

        return root;
    }
    TreeNode* sortedArrayToBST(std::vector<int>& nums)
    {
        return part(nums, 0, static_cast<int>(nums.size()) - 1);
    }
};