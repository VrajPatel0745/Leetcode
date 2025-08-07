/**
 * 
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        int count = 0;
        countNodesHelper(root, count);
        return count;
    }

    void countNodesHelper(TreeNode* node, int& count) {
        if (node == nullptr) return;

        count++;
        countNodesHelper(node->left, count);
        countNodesHelper(node->right, count);
    }
};
