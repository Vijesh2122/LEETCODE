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
    long long ans = LLONG_MAX;

    void dfs(TreeNode* root, int mn) {
        if (root == nullptr)
            return;

        if (root->val > mn) {
            ans = min(ans, (long long)root->val);
            return;
        }

        dfs(root->left, mn);
        dfs(root->right, mn);
    }

    int findSecondMinimumValue(TreeNode* root) {
        dfs(root, root->val);

        return ans == LLONG_MAX ? -1 : (int)ans;
    }
};
