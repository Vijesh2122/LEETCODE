/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        // Empty tree
        if (root == nullptr)
            return false;

        // Subtract current node value
        targetSum -= root->val;

        // Check whether current node is a leaf
        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == 0;
        }

        // Check left or right subtree
        return hasPathSum(root->left, targetSum) ||
               hasPathSum(root->right, targetSum);
    }
};