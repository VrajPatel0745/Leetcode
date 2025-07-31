/**
 * Definition for a binary tree node.
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> p;
        Preorder(root,p);
        return p;
    }
    void Preorder(TreeNode* tp,vector<int>&r)
    {
        if(tp!=nullptr)
        {
            Preorder(tp->left,r);
            r.push_back(tp->val);
            Preorder(tp->right,r);
        }
        

    }
};