#include <iostream>
#include <vector>
using namespace std;

// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };

class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return buildBST(nums, 0, nums.size() - 1);
    }

private:
    TreeNode *buildBST(vector<int> &nums, int left, int right)
    {
        if (left > right)
            return nullptr;

        int mid = (left + right) / 2;
        TreeNode *node = new TreeNode(nums[mid]);
        node->left = buildBST(nums, left, mid - 1);
        node->right = buildBST(nums, mid + 1, right);
        return node;
    }
};
