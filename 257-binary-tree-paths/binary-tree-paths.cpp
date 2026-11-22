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
    vector<string> ans;
    string path;

    void solve(TreeNode* root) {
        if (root == nullptr)
            return;

        // Add current node value
        path += to_string(root->val);

        // If leaf node, store path
        if (root->left == nullptr &&
            root->right == nullptr) {
            ans.push_back(path);
        }
        else {
            path += "->";

            solve(root->left);
            solve(root->right);

            // Remove arrow during backtracking
            path.resize(path.size() - 2);
        }

        // Remove current node value
        path.resize(path.size() - to_string(root->val).size());
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        ans.clear();
        path.clear();

        solve(root);

        return ans;
    }
};
