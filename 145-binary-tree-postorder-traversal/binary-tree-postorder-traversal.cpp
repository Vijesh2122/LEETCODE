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

    void postorder(TreeNode* root, vector<int>& a) {

        if (root == nullptr)
            return;

        
        // Left
        postorder(root->left, a);

        // Right
        postorder(root->right, a);
        
        // Root
        a.push_back(root->val);

    }

    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> a;

        postorder(root, a);

        return a;
    }
};