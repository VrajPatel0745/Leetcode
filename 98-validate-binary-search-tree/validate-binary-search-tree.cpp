class Solution {
public:
    long prev = LONG_MIN; // track previous visited value
    bool firstNode = true;

    bool isValidBST(TreeNode* root) {
        return inorder(root);
    }

    bool inorder(TreeNode* node) {
        if (!node) return true;

        if (!inorder(node->left)) return false;

        if (!firstNode && node->val <= prev) return false;
        firstNode = false;
        prev = node->val;

        return inorder(node->right);
    }
};