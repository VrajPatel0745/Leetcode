class Solution {
public:
    int dfs(TreeNode* node, int current) {
        if (node == NULL)
            return 0;

        // Build binary number
        current = current * 2 + node->val;

        // If leaf node
        if (node->left == NULL && node->right == NULL)
            return current;

        // Return sum of left and right subtree
        return dfs(node->left, current) + dfs(node->right, current);
    }

    int sumRootToLeaf(TreeNode* root) {
        return dfs(root, 0);
    }
};