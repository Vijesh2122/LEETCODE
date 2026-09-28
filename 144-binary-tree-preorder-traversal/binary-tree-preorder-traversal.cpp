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

    void preorder(TreeNode* root, vector<int>& a) {

        if (root == nullptr)
            return;

        // Root
        a.push_back(root->val);

        // Left
        preorder(root->left, a);

        // Right
        preorder(root->right, a);
    }

    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> a;

        preorder(root, a);

        return a;
    }
};