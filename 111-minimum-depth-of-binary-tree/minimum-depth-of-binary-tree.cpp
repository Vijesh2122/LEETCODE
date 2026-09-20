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
    int minDepth(TreeNode* root) {

        // Empty tree
        if (root == nullptr)
            return 0;

        // If left child is missing,
        // we must go through the right subtree
        if (root->left == nullptr)
            return 1 + minDepth(root->right);

        // If right child is missing,
        // we must go through the left subtree
        if (root->right == nullptr)
            return 1 + minDepth(root->left);

        // Both children exist
        return 1 + min(minDepth(root->left),
                       minDepth(root->right));
    }
};